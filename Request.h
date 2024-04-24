#pragma once

#include <iostream>
#include "Student.h"

class Request
// This is the main “Flag raising” aspect of the code. 
// All the fields required to be filled by students (inputs from students) to receive help from a tutor
{
    public:
    Student studentInfo;
    int tableNum;
    std::string CourseInfo;
    std::string RequestInfo;
    std::string prefferedTA;

};