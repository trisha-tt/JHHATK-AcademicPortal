#pragma once

#include <iostream>
#include "Request.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
class RequestInterface
{
public:
    Request requestList;
    bool acceptFlags();
    bool deleteFlags();
    bool flagComplete();
    int countRequests();
};

bool RequestInterface::acceptFlags()
// allows the TA to assign the request to themselves & indicate that they will help the student
{
    // The Tutor will be able to view all the active requests made by the students in the MLC
    // When the tutor accepts the request, it will be assigned to them, hence removing it from the active queue
}

bool RequestInterface::deleteFlags()
// allows the TA to delete any requests that are unneeded
{
    // Allows the Tutor to delete the request as needed
    // Examples of usage: duplicate request, student unavailable, etc
    // Doing so removes the request from the active queue and the Tutor's personal queue
}

bool RequestInterface::flagComplete()
// allows the TA to mark a request as done
{
    // Allows the Tutor to mark the request as completed after assisting the student
    // If there is any incomplete information in the request, the Tutor will be able to fill the necessary details
    // The Tutor must also include a resolution message, describing how the student's issue was solved
}

int RequestInterface::countRequests()
// counts the number of completed requests
//  used by class Reports when creating reports
{
    //reads the reportType1, and tally all the request made from all courses
    int totalRequests = 0;
    std::ifstream file("report_type1.csv");
    if (file.is_open()) {
        std::string line;
        std::getline(file, line); // Skip the header line

        while (std::getline(file, line)) {
            std::string course;
            int requestCount;

            std::size_t commaPos = line.find(',');
            if (commaPos != std::string::npos) {
                course = line.substr(0, commaPos);
                requestCount = std::stoi(line.substr(commaPos + 1));
                totalRequests += requestCount;
            }
        }

        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    return totalRequests;
}