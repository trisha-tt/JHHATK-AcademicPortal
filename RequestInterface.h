#pragma once

#include <iostream>
#include "Request.h"

class RequestInterface
{
public:
    Request requestList;
    bool acceptFlags();
    bool deleteFlags();
    bool flagComplete();
    int countRequests();
};


bool acceptFlags() 
//allows the TA to assign the request to themselves & indicate that they will help the student
{



}


bool deleteFlags()
//allows the TA to delete any requests that are unneeded
{



}


bool flagComplete()
// allows the TA to mark a request as done
{



}


int countRequests()
//counts the number of completed requests
// used by class Reports when creating reports
{


}