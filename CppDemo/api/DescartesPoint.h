#pragma once
#include <sstream>
#include <string>

namespace Dobot
{
    struct CDescartesPoint
    {
    public:
        /// <summary>
        /// X 轴位置，单位：毫米
        /// </summary>
        double x;

        /// <summary>
        /// Y 轴位置，单位：毫米
        /// </summary>
        double y;

        /// <summary>
        /// Z 轴位置，单位：毫米
        /// </summary>
        double z;

        /// <summary>
        /// R 轴位置，单位：度
        /// </summary>
        double r;

        std::string ToString()
        {
            std::ostringstream oss;
            oss << x << ',' << y << ',' << z << ',' << r;
            return oss.str();
        }
    };
}
