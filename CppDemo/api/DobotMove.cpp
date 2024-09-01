#include "DobotMove.h"
#include <sstream>

namespace Dobot
{
    CDobotMove::CDobotMove() {}
    CDobotMove::~CDobotMove() {}

    void CDobotMove::OnConnected()
    {}
    void CDobotMove::OnDisconnected()
    {}

    // 重载无参函数
    std::string CDobotMove::MoveJog()
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::string str = "MoveJog()";

        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::StopMoveJog()
    {
        return MoveJog();
    }

    std::string CDobotMove::MovJ(const CDescartesPoint &pt)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovJ(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ")";
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::MovL(const CDescartesPoint &pt)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovL(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ')';
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::JointMovJ(const CJointPoint &pt)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "JointMovJ(" << pt.j1 << ',' << pt.j2 << ',' << pt.j3 << ',' << pt.j4 << ')';
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::MovLIO(const CDescartesPoint &pt)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovLIO(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ")";
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::MovJIO(const CDescartesPoint &pt)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovJIO(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ")";
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::Arc(const CDescartesPoint &pt, const CDescartesPoint &pt2)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "Arc(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ","
            << pt2.x << ',' << pt2.y << ',' << pt2.z << ',' << pt2.r << ")";
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::Circle(const CDescartesPoint &pt, const CDescartesPoint &pt2, int count)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "Circle(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ","
            << pt2.x << ',' << pt2.y << ',' << pt2.z << ',' << pt2.r << "," << std::to_string(count) << ")";
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::Sync()
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }
        std::string str = "Sync()";
        if (!SendData(str))
        {
            return str + ":send error";
        }
        return WaitReply(5000000);
    }

    std::string CDobotMove::RelMovJUser(const CDescartesPoint &pt, int User)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "RelMovJUser(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << "," << std::to_string(User) << ")";
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::RelMovLUser(const CDescartesPoint &pt, int User)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "RelMovLUser(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << "," << std::to_string(User) << ")";
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::RelJointMovJ(const CDescartesPoint &pt)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "RelJointMovJ(" << pt.x << ',' << pt.y << ',' << pt.z << ',' << pt.r << ")";
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::MovJExt(float offset)
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }

        std::ostringstream oss;
        oss << "MovJExt(" << std::to_string(offset) << ")";
        std::string str = oss.str();
        if (!SendData(str))
        {
            return str + ":send error";
        }

        return WaitReply(5000);
    }

    std::string CDobotMove::SyncAll()
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }
        std::string str = "SyncAll()";
        if (!SendData(str))
        {
            return str + ":send error";
        }
        return WaitReply(5000);
    }

    std::string CDobotMove::wait()
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }
        std::string str = "wait()";
        if (!SendData(str))
        {
            return str + ":send error";
        }
        return WaitReply(5000);
    }

    std::string CDobotMove::pause()
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }
        std::string str = "pause()";
        if (!SendData(str))
        {
            return str + ":send error";
        }
        return WaitReply(5000);
    }

    std::string CDobotMove::Continue()
    {
        if (!IsConnected())
        {
            return "device does not connected!!!";
        }
        std::string str = "continue()";
        if (!SendData(str))
        {
            return str + ":send error";
        }
        return WaitReply(5000);
    }
}
