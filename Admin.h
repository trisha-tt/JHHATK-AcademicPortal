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



}



void Admin::viewReports()
// displays all of the reports generated/requested by the admin, showing statistics/information on student queries (information depending on the report type)
// uses functions from class Report
{




}