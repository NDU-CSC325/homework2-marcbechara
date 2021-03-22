#pragma once
#include <utility>
#include <vector>
#include <queue>

/***********************************************************/
/**************** PROBLEM 1 ********************************/
/***********************************************************/

/**
 *  stops()->std::vector<int>
 * 
 * @param stations: location of available stations
 * @param distanceToB
 * @param distanceOnFull
 * @return locations of minimum set of stations the traveler stops on
 */
std::vector<int> stops(std::vector<int>& stations, int distanceToB, int distanceOnFull) {
    return std::vector<int> {};
}

/***********************************************************/
/**************** PROBLEM 2 ********************************/
/***********************************************************/

/**
 * Time needed to perform a job
 * of the form (preprocessing time, run time)
 */
#ifndef JOB
using Job = std::pair<int, int>;
#define JOB
#endif 


/**
 *  finish()->int
 * 
 * @param jobs: list of jobs
 * @return minimum time needed to perform all jobs
 */
int finish(std::vector<Job>& jobs) {
  
    int finish{ -1 };
    int buffer{0};
    for (int i = 0; i < jobs.size(); ++i) {
        buffer +=  jobs[i].first;
        int temp = buffer + jobs[i].second;
        if (temp > finish)finish = temp;
    }

    return finish; 
    
}
/**
 *  schedule()->std::vector<Job>
 * 
 * @param jobs                                              
 * @return order to preprocess all jobs to obtain minimum total time
 */
std::vector<Job> schedule(std::vector<Job>& jobs) {
    std::vector<Job> v(jobs);
    std::sort(v.begin(), v.end(), [](auto& left, auto& right) {
        return (left.second > right.second ); });
    return v;
}


/***********************************************************/
/**************** PROBLEM 3 ********************************/
/***********************************************************/


/**
 * value of stock at time t
 * of the form (time,value)
 */
#ifndef STOCK
#define STOCK
using Stock = std::pair<int, int>;
#endif 
/**
 *  stock()->std::vector<Stock>
 * 
 * @param values list of stock values at different times
 * @param budget initial money the buyer has
 * @return list of stocks bought in the form (number of shares,price per share)
 */
std::vector<Stock> stock(std::vector<Stock>& values, int budget) {
    std::vector<Stock> v(values);
    std::sort(v.begin(), v.end(), [](auto& left, auto& right) {
        return left.second < right.second;});

    for (auto it = v.begin(); it != v.end(); it++) {
        auto res = (*it).first * (*it).second;
        if(res < budget) budget -= res;
        
        else if ( budget / (*it).second == 0) {
            v.erase(it, v.end());
            return v;
        }
        else {
            auto temp = budget / (*it).second;
            (*it).first = temp;
            budget = budget - ((*it).second * temp);
        }
    }
}
