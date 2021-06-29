#pragma once

#include "MovementStrategy.h"

namespace corsim
{
    // Regular movement strategy for 25% of the subjects
    class RegularMovementStrategy : public MovementStrategy
    {
        public:
            double run(double i, double di, double dt) override;
    };
}