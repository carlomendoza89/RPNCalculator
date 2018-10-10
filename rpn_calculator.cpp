//
// Created by Carlo on 2018-10-09.
//

#include "rpn_calculator.hpp"

using namespace std;

operation* rpn_calculator::operation_type(int operation)
{
    switch(operation)
    {
        case addition_operation::ADDITION_CODE : return new addition_operation;
        case substraction_operation::SUBTRACTION_CODE : return new substraction_operation;
        case multiplication_operation::MULTIPLICATION_CODE : return new multiplication_operation;
        case division_operation::DIVISION_CODE : return new division_operation;
        default: cout << "Invalid operation code" << endl;
    }
}

void rpn_calculator::perform(operation *op)
{
    int b = stack.top();
    stack.pop();
    int a = stack.top();
    stack.pop();
    result = op->perform(a, b);
    stack.push(result);
}