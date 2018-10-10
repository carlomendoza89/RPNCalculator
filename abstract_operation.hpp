//
// Created by Carlo on 2018-10-09.
//

#pragma once

#include "operation.hpp"

class abstract_operation : public operation
{
private:
    char operation_type;
public:
    abstract_operation(char op) : operation_type(op) {}
    char get_code() override {return operation_type;}
    ~abstract_operation() override {}
};