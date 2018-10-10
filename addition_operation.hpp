//
// Created by Carlo on 2018-10-09.
//

#pragma once

#include "abstract_operation.hpp"

class addition_operation : public abstract_operation
{
public:
    static const char ADDITION_CODE {'+'};

    addition_operation() : abstract_operation(ADDITION_CODE) {}

    int perform(int a, int b) override
    {
        return a + b;
    }

    ~addition_operation() {}
};
