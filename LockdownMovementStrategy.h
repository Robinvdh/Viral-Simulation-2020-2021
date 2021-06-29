#pragma once
#include "MovementStrategy.h"

namespace corsim
{
    // Lockdown strategy with variables for subjects
    class LockdownMovementStrategy : public MovementStrategy
    {
        public:
        double run(double i, double di, double dt) override;
    };
} 