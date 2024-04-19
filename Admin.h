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