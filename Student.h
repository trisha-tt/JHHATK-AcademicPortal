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



Request makeRequest()
/* 
student will make a request, where they fill in all the information from the request class 
(studentInfo, tableNum, CourseInfo, RequestInfo, prefferedTA), which will be sent out to the TAs
*/
{


}