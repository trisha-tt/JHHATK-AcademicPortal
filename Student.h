#pragma once

#include <iostream>
#include "Request.h"

class Student
{
private:
    std::string name;
    int IDnumber;

public:
    Request makeRequest();

    Student()
    {
        this->name = "";
        this->IDnumber = 0;
    }

    Student(std::string userName, int userID)
    {
        this->IDnumber = userID;
        this->name = userName;
    }
};
