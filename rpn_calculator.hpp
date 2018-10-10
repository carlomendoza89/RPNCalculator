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
    void perform(operation* op);

public:
    int process_formula(std::string formula);
};