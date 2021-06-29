#pragma once

namespace corsim
{
    // Interface for the movement strategies
    class MovementStrategy
    {
        public:
            MovementStrategy() {}
            virtual ~ MovementStrategy() {}
            virtual double run(double i, double di, double dt) = 0;
    };
}