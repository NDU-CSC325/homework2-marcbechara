/*****************************************************************//**
 * @file   gas.cpp
 * @brief  A traveler is going from point A to point B
 * Along the way there are gas stations at different locations
 * When the tank is full the traveler can move distance distanceOnFull
 * Distance to point point is distanceToB
 * The goal is to reach point B while using the minimum number of stations
 * @author Hikmat Farhat
 * @date   March 2021
 *********************************************************************/

#include <iostream>
#include "hw2.h"


int main()
{

    const int distanceToB = 100;
    const int distanceOnFull = 20;
    std::vector<int> stations{ 2,7,13,18,22,25,29,31,32,39,42,44,46,53,56,61,67,75,78,87,89,92,95,99 };
    auto s = stops(stations, distanceToB, distanceOnFull);
    for (auto& x:s)
        std::cout << x << ",";

    std::cout << "\n";
    
}
