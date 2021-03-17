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
    return 0;
}
/**
 *  schedule()->std::vector<Job>
 * 
 * @param jobs
 * @return order to preprocess all jobs to obtain minimum total time
 */
std::vector<Job> schedule(std::vector<Job>& jobs) {
    return std::vector<Job> {};
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
    return std::vector<Stock> {};
}
