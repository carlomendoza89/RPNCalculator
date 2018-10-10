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
    /**
     * gets an operation type from a operation object
     *
     * @return the operation type
     */
    char get_code() override {return operation_type;}
    virtual ~abstract_operation() {}
};