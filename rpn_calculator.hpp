//
// Created by Carlo on 2018-10-09.
//

#pragma once

#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include <stack>
#include <iostream>

class rpn_calculator
{
private:
    int result;
    std::stack<int> stack;
    operation* operation_type(int operation);

    /**
     * Pops the top two number from the stack, applies the operation and pushes the result back on the stack.
     *
     * @param op pointer to an operation to perform
     */
    void perform(operation* op);

public:
    /**
     * This function must read the formula from left to right. Integers in the formula must be
     * pushed to the stack. When an operation is encountered, the top two operands must be
     * removed from the stack and used with the operator. The result must be pushed back on
     * the stack. When we get to the end of the formula, we can return the final value
     *
     * @param formula the formula to be read
     * @return the final value of the formula
     */
    int process_formula(std::string formula);
};