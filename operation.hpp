//
// Created by Carlo on 2018-10-09.
//

#pragma once

/**
 * Interface for operation classes
 */
class operation
{
public:
    virtual char get_code() = 0;
    virtual int perform(int a, int b) = 0;
    virtual ~operation(){};
};