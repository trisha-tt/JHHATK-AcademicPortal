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

};

