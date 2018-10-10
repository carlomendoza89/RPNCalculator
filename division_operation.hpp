//
// Created by Carlo on 2018-10-09.
//

#pragma once

#include "abstract_operation.hpp"

class division_operation : public abstract_operation
{
public:
    static const char DIVISION_CODE {'/'};

    division_operation() : abstract_operation(DIVISION_CODE) {}

    int perform(int a, int b) override
    {
        return a / b;
    }

    ~division_operation() {}
};