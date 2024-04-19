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