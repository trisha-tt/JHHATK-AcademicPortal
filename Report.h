#pragma once

#include <iostream>

class Report
{
private:
    int reportType;

public:
    int getReportType();
    void generateReportType1();
    void generateReportType2();
};

int Report::getReportType()
// Asks for the report type: 1 - Reports the number of student queries for each class; 2 - Reports the number of queries cleared by a tutor (each tutor has a report)
//called by class Admin, when admin wants to view reports
{

}

void Report::generateReportType1()
//create a report of type 1,
// Reports the number of student queries for each class
{

}


void Report::generateReportType2()
//create a report of type 2,
// Reports the number of queries cleared by a tutor (each tutor has a report)
{

}