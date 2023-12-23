#pragma once

#include "DobotClient.h"
#include "DescartesPoint.h"
#include "JointPoint.h"

namespace Dobot
{
    class CDobotMove : public CDobotClient
    {
    public:
        CDobotMove();
        virtual ~CDobotMove();

        /// 关节点动运动，不固定距离运动
        /// <param name="s">点动运动轴</param>
        /// <returns>返回执行结果的描述信息</returns>
        std::string MoveJog();
        template <typename... Args>
        std::string MoveJog(Args... args);

        /// 停止关节点动运动
        /// <returns>返回执行结果的描述信息</returns>
        std::string StopMoveJog();

        /// 点到点运动，目标点位为笛卡尔点位
        /// <param name="pt">笛卡尔点位</param>
        /// <returns>返回执行结果的描述信息</returns>
        std::string MovJ(const CDescartesPoint &pt);
        template <typename... Args>
        std::string MovJ(const CDescartesPoint &pt, Args... args);

        /// 直线运动，目标点位为笛卡尔点位
        /// <param name="pt">笛卡尔点位</param>
        /// <returns>返回执行结果的描述信息</returns>
        std::string MovL(const CDescartesPoint& pt);
        template <typename... Args>
        std::string MovL(const CDescartesPoint &pt, Args... args);

        /// 点到点运动，目标点位为关节点位。
        /// <param name="pt"></param>
        /// <returns>返回执行结果的描述信息</returns>
        std::string JointMovJ(const CJointPoint &pt);
        template <typename... Args>
        std::string JointMovJ(const CJointPoint &pt, Args... args);

        std::string MovLIO(const CDescartesPoint &pt);
        template <typename... Args>
        std::string MovLIO(const CDescartesPoint &pt, Args... args);

        std::string MovJIO(const CDescartesPoint &pt);
        template <typename... Args>
        std::string MovJIO(const CDescartesPoint &pt, Args... args);

        std::string Arc(const CDescartesPoint &pt, const CDescartesPoint &pt2);
        template <typename... Args>
        std::string Arc(const CDescartesPoint &pt, const CDescartesPoint &pt2, Args... args);

        std::string Circle(const CDescartesPoint &pt, const CDescartesPoint &pt2, int count);
        template <typename... Args>
        std::string Circle(const CDescartesPoint &pt, const CDescartesPoint &pt2, int count, Args... args);

        std::string Sync();

        std::string RelMovJUser(const CDescartesPoint &pt, int User);
        template <typename... Args>
        std::string RelMovJUser(const CDescartesPoint &pt, int User, Args... args);

        std::string RelMovLUser(const CDescartesPoint &pt, int User);
        template <typename... Args>
        std::string RelMovLUser(const CDescartesPoint &pt, int User, Args... args);

        std::string RelJointMovJ(const CDescartesPoint &pt);
        template <typename... Args>
        std::string RelJointMovJ(const CDescartesPoint &pt, Args... args);

        std::string MovJExt(float offset);
        template <typename... Args>
        std::string MovJExt(float offset, Args... args);

        std::string SyncAll();
        std::string wait();
        std::string Continue();
        std::string pause();

    protected:
        void OnConnected() override;
        void OnDisconnected() override;

    private:
        // 类外定义成员函数
        template <typename T>
        void printArg(T arg);

        template <typename T, typename... Args>
        void printArg(T arg, Args... args);

        template <typename T>
        std::string toString(T arg);

        std::string strSend{""};
    };

    // 可选参数输出
    template <typename T>
    void CDobotMove::printArg(T arg)
    {
        strSend = strSend + toString(arg) + ")";
    }

    // 递归输出可选参数
    template <typename T, typename... Args>
    void CDobotMove::printArg(T arg, Args... args)
    {
        strSend = strSend + toString(arg) + ",";
        printArg(args...);
    }

    // 辅助函数，将参数转换为字符串
    template <typename T>
    std::string CDobotMove::toString(T arg)
    {
        std::stringstream ss;
        ss << arg;
        return ss.str();
    }

    template <typename... Args>
    std::string CDobotMove::MoveJog(Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        strSend = "MoveJog(";
        printArg(args...);
        std::string str = strSend;
        strSend.clear();

        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::MovJ(const CDescartesPoint &pt, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovJ(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::MovL(const CDescartesPoint &pt, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovL(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::JointMovJ(const CJointPoint &pt, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "JointMovJ(" << pt.j1 << ',' << pt.j2 << ',' << pt.j3 << ',' << pt.j4 << ')';
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::MovLIO(const CDescartesPoint &pt, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovLIO(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::MovJIO(const CDescartesPoint &pt, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovJIO(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::Arc(const CDescartesPoint &pt, const CDescartesPoint &pt2, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "Arc(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ","
            << pt2.x << ',' << pt2.y << ',' << pt2.z << ',' << pt2.r << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::Circle(const CDescartesPoint &pt, const CDescartesPoint &pt2, int count, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "Circle(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ","
            << pt2.x << ',' << pt2.y << ',' << pt2.z << ',' << pt2.r << "," << std::to_string(count) << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::RelMovJUser(const CDescartesPoint &pt, int User, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "RelMovJUser(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << "," << std::to_string(User) << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::RelMovLUser(const CDescartesPoint &pt, int User, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "RelMovLUser(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << "," << std::to_string(User) << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::RelJointMovJ(const CDescartesPoint &pt, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "RelJointMovJ(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    template <typename... Args>
    std::string CDobotMove::MovJExt(float offset, Args... args)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovJExt(" << offset << ",";
        strSend = oss.str();
        printArg(args...);
        std::string str = strSend;
        strSend.clear();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }
}

