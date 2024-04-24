#pragma once

#include <iostream>
#include "Student.h"

class Request
{
public:
    Request()
    {
        this->studentInfo = Student();
        this->tableNum = 0;
        this->CourseInfo = "";
        this->RequestInfo = "";
        this->prefferedTA = "";
    }
    Request(Student studentInfo, int tableNum, std::string CourseInfo, std::string RequestInfo, std::string prefferedTA)
    {
        this->studentInfo = studentInfo;
        this->tableNum = tableNum;
        this->CourseInfo = CourseInfo;
        this->RequestInfo = RequestInfo;
        this->prefferedTA = prefferedTA;
    }

    // This is the main “Flag raising” aspect of the code.
    // All the fields required to be filled by students (inputs from students) to receive help from a tutor
    Student studentInfo;
    int tableNum;
    std::string CourseInfo;
    std::string RequestInfo;
    std::string prefferedTA;
};