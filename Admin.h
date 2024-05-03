#pragma once

#include <iostream>
#include "LoginDatabase.h"

class Admin
{
private:
    std::string name;
    LoginDatabase email;

public:
    void login();
    void addTutor();
    void viewReports();
};

void Admin::login()
// user can login as admin in order to have permissions to do the functions below (that TAs/students can’t do)
{
}

void Admin::addTutor()
// admin can add a new tutor to the login database/system
{
    // Get Tutor Login info from user (Admin - Manager of MLC).
    // Check if the Tutor Login Info is already in the LoginDatabase
    // If not, add Tutor Login Info to the database
    // if it is, give an error message to the User
}

void Admin::viewReports()
// displays all of the reports generated/requested by the admin, showing statistics/information on student queries (information depending on the report type)
// uses functions from class Report
{
    // Use function getReportType to receive the input from user (Admin) on desired report type
    // According to their input, the appropriate function is called to generate the desired report
}

