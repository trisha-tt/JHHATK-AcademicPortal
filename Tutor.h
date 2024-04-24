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


void Tutor::login()
// user can login as tutor in order to have permissions to do the functions below 
{


}


void Tutor::viewRequest()
// tutor can view request interface
// calls functions from class Request to allow the tutor to perform necessary actions
{


}