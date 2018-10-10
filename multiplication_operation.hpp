//
// Created by Carlo on 2018-10-09.
//

#pragma once

#include "abstract_operation.hpp"

class multiplication_operation : public abstract_operation
{
public:
    static const char MULTIPLICATION_CODE {'*'};

    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) {}

    /**
     * performs a multiplication between two numbers
     *
     * @param a multiplicand
     * @param b multiplicator
     * @return product
     */
    int perform(int a, int b) override
    {
        return a * b;
    }

    ~multiplication_operation() {}
};