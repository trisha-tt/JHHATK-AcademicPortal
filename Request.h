#pragma once

#include <iostream>
#include "Student.h"

class Request
{
    public:
    Student studentInfo;
    int tableNum;
    std::string CourseInfo;
    std::string RequestInfo;
    std::string prefferedTA;

};