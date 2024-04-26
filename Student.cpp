#include "Student.h"

Request Student::makeRequest()
//student will make a request, where they fill in all the information from the request class
//(studentInfo, tableNum, CourseInfo, RequestInfo, prefferedTA), which will be sent out to the TAs
{
    Student info("",0);
    int table = 0;
    std::string course = "";
    std::string request = "";
    std::string preffered = "";

    //std::cout << "Enter your name: " << std::endl;
    std::cin >> info.name;
    //std::cout << "Enter your student ID number: " << std::endl;
    std::cin >> info.IDnumber;
    //std::cout << "Enter the MLC table number: " << std::endl;
    std::cin >> table;
    //std::cout << "Enter the course name and number: " << std::endl;
    std::cin >> course;
    //std::cout << "Enter any additonal info (optional): " << std::endl;
    std::cin >> request;
    //std::cout << "Do you have a preferred Tutor? Enter the name of Tutor:" << std::endl;
    std::cin >> preffered;

    std::cout << "Thank you! Your request will be sent to tutors." << std::endl;

    return Request(info,table,course,request,preffered);

}