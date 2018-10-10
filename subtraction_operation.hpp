//
// Created by Carlo on 2018-10-09.
//

#pragma once

#include "abstract_operation.hpp"

class substraction_operation : public abstract_operation
{
public:
    static const char SUBTRACTION_CODE {'-'};

    substraction_operation() : abstract_operation(SUBTRACTION_CODE) {}

    int perform(int a, int b) override
    {
        return a - b;
    }

    ~substraction_operation() {}
};