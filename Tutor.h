#pragma once

#include <iostream>
#include "LoginDatabase.h"

class Tutor
{
    private:
    std::string name;
    LoginDatabase email;

    public:
    void login();
    void viewRequest();

};