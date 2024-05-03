#pragma once

#include <iostream>

class Report
{
private:
    int reportType;

    // what courses are being requested for helpp
    // how many students are requesting help for that class
    std::vector<std::string> courses;
    std::vector<int> studentQueriesCount;

    // what tutors are there
    // how many times the tutor has helped a student
    std::vector<std::string> tutors;
    std::vector<int> queriesClearedCount;

public:
    int getReportType();
    void generateReportType1();
    void generateReportType2();

    // add to querey for the student requesting help and to what course
    void addStudentQuery(const std::string &course);
    // add number of queries cleared by tutor
    void addTutorQuery(const std::string &tutorName);
};

int Report::getReportType()
// Asks for the report type: 1 - Reports the number of student queries for each class; 2 - Reports the number of queries cleared by a tutor (each tutor has a report)
// called by class Admin, when admin wants to view reports
{
    int ans = 0;

    std::cout << "Select report type: " << std::endl;
    std::cout << "1. Number of students per course" << std::endl;
    std::cout << "2. Number of queries per tutor" << std::endl;
    std::cout << "--->" << std::endl;
    std::cin >> ans;

    return ans;
}

void Report::generateReportType1()
// create a report of type 1,
//  Reports the number of student queries for each class
{
    std::ofstream outputFile("report_type1.csv");
    if (outputFile.is_open())
    {
        outputFile << "Course,Number of Student Queries\n";
        for (size_t i = 0; i < courses.size(); i++)
        {
            outputFile << courses[i] << "," << studentQueriesCount[i] << "\n";
        }
        outputFile.close();
        std::cout << "Report type 1 generated successfully." << std::endl; //report to terminal 
    }
    else
    {
        std::cout << "Unable to open file for writing." << std::endl; //report to terminal
    }
}

void Report::generateReportType2()
// create a report of type 2,
//  Reports the number of queries cleared by a tutor (each tutor has a report)
{
    std::ofstream outputFile("report_type2.csv");
    if (outputFile.is_open())
    {
        outputFile << "Tutor,Number of Queries Cleared\n";
        for (size_t i = 0; i < tutors.size(); i++)
        {
            outputFile << tutors[i] << "," << queriesClearedCount[i] << "\n";
        }
        outputFile.close();
        std::cout << "Report type 2 generated successfully." << std::endl; //report to terinal 
    }
    else
    {
        std::cout << "Unable to open file for writing." << std::endl; //report to terminal
    }
}




///////////////////////////////////////////////////////////// functions to modify querey count
void Report::addStudentQuery(const std::string& course) {
    for (size_t i = 0; i < courses.size(); i++) {
        if (courses[i] == course) {
            studentQueriesCount[i]++;
            return;
        }
    }
    courses.push_back(course);
    studentQueriesCount.push_back(1);
}

void Report::addTutorQuery(const std::string& tutorName) {
    for (size_t i = 0; i < tutors.size(); i++) {
        if (tutors[i] == tutorName) {
            queriesClearedCount[i]++;
            return;
        }
    }
    tutors.push_back(tutorName);
    queriesClearedCount.push_back(1);
}