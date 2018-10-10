//
// Created by Carlo on 2018-10-09.
//

#include "rpn_calculator.hpp"
#include <sstream>

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

int rpn_calculator::process_formula(string formula)
{
    istringstream iss(formula);
    string operand;
    while(iss >> operand)
    {
        istringstream iss2(operand);
        int number;
        if(iss2 >> number)
        {
            stack.push(number);
        }
        else
        {
            perform(operation_type(operand[0]));
        }
    }
    return stack.top();
}