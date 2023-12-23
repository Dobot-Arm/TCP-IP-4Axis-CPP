// CPP_demo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "DobotMove.h"
#include "Dashboard.h"

#define PARAMS 0

/* 原来问题：
    1.客户不知道怎么使用指令，指令功能不明确和使用指令方式
    2. 指令不全，二次开发指令较少
    3. 缺少demo来 展示使用示例。
    4. 紧急特殊情况处理方式
*/
/*
   demo  每次下发指令判断GetErrorID()是否有报错
*/

int main()
{
    std::string ip;
    unsigned short iPort;
    unsigned short iPort_m;
    ip = "192.168.1.6";
    iPort = 29999;
    iPort_m = 30003;

    Dobot::CDobotMove m_DobotMove;
    Dobot::CDashboard m_Dashboard;
    m_Dashboard.Connect(ip, iPort);
    m_DobotMove.Connect(ip, iPort_m);
    Dobot::CDescartesPoint pt;

    /******************************
    #if PARAMS  条件编译 指令是否有参数
        0  指令不含参数
        1   指令含参数

    包括以下指令的例子：
        EnableRobot
        DisableRobot
        DO
        AccJ
        SetArmOrientation
        RunScript
        PositiveSolution
        InverseSolution
        ModbusCreate
        GetHoldRegs
        DOGroup
        MovL
        MovLIO
        MoveJog
        Circle
    ******************************/

    /******************************
     * 指令：EnableRobot
     * 功能：使能机器人
     ******************************/
#if PARAMS
    m_Dashboard.EnableRobot(); // 无参数
#else
    double load = 0.1;
    m_Dashboard.EnableRobot(load); // 一个参数

    double centerX, centerY, centerZ;
    m_Dashboard.EnableRobot(load, centerX, centerY, centerZ); // 四个参数
#endif

    /******************************
     * 指令：DisableRobot
     * 功能：下使能机器人
     ******************************/
    m_Dashboard.DisableRobot();

    /******************************
     * 指令： DO
     * 功能：设置数字输出端口状态（队列指令）
     ******************************/
    int index, status;
    m_Dashboard.DO(index, status);

    /******************************
     *******************************
     *******************************
     * 指令： AccJ
     * 功能：设置关节加速度比例。该指令仅对MovJ、MovJIO、MovJR、 JointMovJ指令有效
     ******************************/
    int R1;
    m_Dashboard.AccJ(R1);

    /******************************
     ******************************
     ******************************
     * 指令： SetArmOrientation
     * 功能：设置手系指令。
     ******************************/
#if PARAMS
    int LorR;
    m_Dashboard.SetArmOrientation(LorR); // M1pro独有
#else
    int LorR, UorD, ForN, Config;
    m_Dashboard.SetArmOrientation(LorR, UorD, ForN, Config);
#endif

    /******************************
     * 指令： RunScript
     * 功能：运行lua脚本。
     ******************************/
    std::string name;
    m_Dashboard.RunScript(name);

    /******************************
     * 指令： PositiveSolution
     * 功能：正解。（给定机器人各关节的角度，计算出机器人末端的空间位置）
     ******************************/
    double J1, J2, J3, J4;
    int User, Tool;
    Dobot::CDescartesPoint cdtepoint; // 关节结构体
    cdtepoint.x = J1;
    cdtepoint.y = J2;
    cdtepoint.z = J3;
    cdtepoint.r = J4;
    m_Dashboard.PositiveSolution(cdtepoint, User, Tool);

    /******************************
     * 指令： InverseSolution
     * 功能：逆解。（已知机器人末端的位置和姿态，计算机器人各关节的角度值）
     ******************************/
#if PARAMS
    double X, Y, Z, R;
    int User, Tool;
    Dobot::CDescartesPoint cdtepoint; // 关节结构体
    cdtepoint.x = X;
    cdtepoint.y = Y;
    cdtepoint.z = Z;
    cdtepoint.r = R;
    m_Dashboard.InverseSolution(cdtepoint, User, Tool);
#else
    double X, Y, Z, R;
    int User, Tool;
    int isJointNear;
    std::string JointNear;            // "{0,0,-90,0}"
    Dobot::CDescartesPoint cdtepoint; // 关节结构体
    cdtepoint.x = J1;
    cdtepoint.y = J2;
    cdtepoint.z = J3;
    cdtepoint.r = J4;
    m_Dashboard.InverseSolution(cdtepoint, User, Tool, isJointNear, JointNear);
#endif

    /******************************
     * 指令： ModbusCreate
     * 功能：创建modbus主站
     ******************************/
#if PARAMS
    std::string ip;
    int port, slave_id;
    m_Dashboard.ModbusCreate(ip, port, slave_id);
#else
    std::string ip;
    int port, slave_id, isRTU;
    m_Dashboard.ModbusCreate(ip, port, slave_id, isRTU);
#endif

    /******************************
     * 指令： GetHoldRegs
     * 功能：读保持寄存器。
     ******************************/
#if PARAMS
    int index, addr, count;
    m_Dashboard.GetHoldRegs(index, addr, count);
#else
    int index, addr, count;
    std::string valType;
    m_Dashboard.GetHoldRegs(index, addr, count, valType);
#endif

    /******************************
     * 指令： DOGroup
     * 功能：设置输出组端口状态  (最大支持64个参数)
     ******************************/

    // 1组端口
    int index, value;
    m_Dashboard.DOGroup(index, value);

    // 32组端口
    int indexa,
        value1, index2, value2, index32, value32;
    m_Dashboard.DOGroup(indexa, value1, index2, value2, index32, value32);

    /******************************
     * 指令： MovL
     * 功能：功能：点到点运动，目标点位为笛卡尔点位
     ******************************/
#if PARAMS
    double x, y, z, r;
    Dobot::CDescartesPoint pt12;
    pt12.x = x;
    pt12.y = y;
    pt12.z = z;
    pt12.r = r;
    m_DobotMove.MovL(pt12);
#else
    double x, y, z, r;
    Dobot::CDescartesPoint pt1;
    pt1.x = x;
    pt1.y = y;
    pt1.z = z;
    pt1.r = r;
    std::string userparam{"User=1"};
    std::string toolparam{"Tool=1"};
    std::string speedlparam{"SpeedL=1"};
    std::string acclparam{"AccL=1"};
    std::string cpparam{"CP=1"};

    // MovL(X,Y,Z,R,User=index,Tool=index,SpeedL=R,AccL=R,CP=R)  参数数量和顺序可灵活使用
    m_DobotMove.MovL(pt1, userparam);                                             // 设置user
    m_DobotMove.MovL(pt1, userparam, toolparam);                                  // 设置user  tool
    m_DobotMove.MovL(pt1, userparam, toolparam, speedlparam);                     // 设置user tool  speedl
    m_DobotMove.MovL(pt1, userparam, toolparam, speedlparam, acclparam);          // 设置user  tool  speedl accl
    m_DobotMove.MovL(pt1, userparam, toolparam, speedlparam, acclparam, cpparam); // 设置user  user  tool  speedl accl cp
    m_DobotMove.MovL(pt1, "User=1", "Tool=1", "SpeedL=1", "AccL=1", "CP=1");

#endif

/******************************
 * 指令： Arc
 * 功能：：从当前位置以圆弧插补方式移动至笛卡尔坐标系下的目标位置。
​		该指令需结合其他运动指令确定圆弧起始点。
 ******************************/
#if PARAMS
    Dobot::CDescartesPoint pt;
    Dobot::CDescartesPoint pt;
    m_DobotMove.Arc(pt, pt, count);
#else
    Dobot::CDescartesPoint pt;
    Dobot::CDescartesPoint pt;
    std::string userparam, toolparam, speedlparam, acclparam;
    m_DobotMove.Arc(pt, pt, count, userparam, toolparam, speedlparam, acclparam);

#endif

    /******************************
     * 指令： MovLIO
     * 功能：在直线运动时并行设置数字输出端口状态，目标点位为笛卡尔点位。
     ******************************/
#if PARAMS
    Dobot::CDescartesPoint pt1;
    pt1.x = x;
    pt1.y = y;
    pt1.z = z;
    pt1.r = r;
    int Mode, Distance, Index, Status;
    m_DobotMove.MovLIO(pt1, Mode, Distance, Index, Status);
#else

    Dobot::CDescartesPoint pt1;
    int Mode, Distance, Index, Status;
    std::string userparam, toolparam, speedlparam, acclparam, cpparam;
    m_DobotMove.MovLIO(pt1, Mode, Distance, Index, Status, userparam, toolparam, speedlparam, acclparam, cpparam);
#endif

    /******************************
     * 指令： MoveJog
     * 功能：点动运动，不固定距离运动
     ******************************/
#if PARAMS
    std::string axisID;
    m_DobotMove.MoveJog(axisID);

#else
    std::string axisID,
        CoordType, userparam, toolparam;
    m_DobotMove.MoveJog(axisID, CoordType, userparam, toolparam);

#endif
    // 发MoveJog()停止命令控制机器人停止运动
    m_DobotMove.MoveJog();

    /******************************
     * 指令： Circle
     * 功能：整圆运动，仅对笛卡尔点位生效。
     ******************************/
#if PARAMS
    Dobot::CDescartesPoint pt;
    Dobot::CDescartesPoint pt;
    int count;
    m_DobotMove.Circle(pt, pt, count);
#else
    Dobot::CDescartesPoint pt;
    Dobot::CDescartesPoint pt;
    int count;
    std::string userparam, toolparam, speedlparam, acclparam;
    m_DobotMove.Circle(pt, pt, count, userparam, toolparam, speedlparam, acclparam);

#endif

    m_DobotMove.Disconnect();
    m_Dashboard.Disconnect();
}
