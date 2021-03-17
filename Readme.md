# Homework 2


This assignment has __three parts__, described below. Before getting to the questions we tackle logistic issues.

## Autograding

To kickstart the autograder, add a comment starting with '/eval' in the pull request "Feedback". It takes a few (about 5) minutes for the autograder to finish. During that time __refrain__ from committing to your repository. 
The autograder will commit the results to the "reports" folder in the root directory. This commit will be shown in the pull request with a __commit message__ containing, either your total grade or if your code doesn't compile, "BUILD_FAILED". 

You can keep updating as many times as you want, until the deadline. However, i prefer if you do most of the updating on your local computer. Once you are confident of your results commit to your Github repository and trigger the autograder.

I reserve the right to limit the number of "/eval"s (not the number commits) you can trigger. Generally, it would be at least 10.

__IMPORTANT__: since the augograder adds/updates files in you repository when you _push_ changes from your local computer you might get a message saying that there
are changes on the remote you need to incorporate first. In that case do a _pull_ before a _push_.

# Problem 1 (25pts)
A driver needs to go from city A to city B at a distance _distanceToB_. Along the way there are _n_ fuel stations. At each station the driver has to decide whether to refuel the tank or not. When the tank is full the car can travel a distance _distanceOnFull_.
Devise a greedy algorithm to select the minimum number of stations where the driver needs to refuel.

In the file "hw2.h" you need to implement the function

```cpp
std::vector<int> stops(std::vector<int>& stations,int distanceToB,int distanceOnFull);
```
Where
1. _stations_ is the list of the distances of all stations from A.
1. _distanceToB_ is the distance from A to B.
1. _distanceOnFull_ is the distance that the car can travel when the tank is full.

__Note__ that initially the tank is full.

The function ```stops``` returns the subset of _stations_ for which the driver needs to stop.
Example:
1. _distanceToB_=20
1. _distanceOnFull=5
1. _stations_={2,3,5,6,8,11,13,15,17,19}
1. return of stops (not optimal) {3,5,6,11,13,15,19}

# Scheduling(40pts)

You are given a list of _n_ jobs. Each job is executed in two steps: a _preprocessing_ step followed by a _production_ step. All the preprocessing is done _sequentially on the same computer_ whereas the _production_ steps of each job
is done independently on a separate computer. Job _i_ is represented by a pair _(p<sub>i</sub>,f<sub>i</sub>)_ denoting
the duration of the preprocessing and production steps, respectively.
Devise a greedy algorithm to schedule the jobs on the common computer such that the completion time is minimum.

Example:
Consider the jobs { (2,13),(4,2),(5,3)} and suppose we schedule them as they come:
1. The first job finishes preprocessing at 2s, runs on a separate computer for 13 s and finishes at time=15s
1. The second job finishes preprocessing at (2+4)s, runs on a separate computer for 2s and finishes at time=8s
1. The third job finishes preprocessing at (2+4+5)s, runs on a separate computer for 3s and finishes at time=14s

The jobs are complete (completion time) at 15s.

Implement the greedy algorithm in the file "hw2.h" using the two functions
```cpp
using Job=std::pair<int,int>;// (preprocessing time,production time)
std::vector<Job> schedule(std::vector<Job>& jobs);
```
Returns the jobs in the order that produces the minimum completion time.
```cpp
int finish(std::vector<Job>& jobs);
```
Returns the completion time for the given jobs.

# Stock (35pts)

The values of a stock at  times _i_ is given by _S[i]_. At any given time _i_ you are allowed
to buy __at most__ _i_ shares. Given a budget _K_ devise a greedy algorithm to buy the maximum number of shares.

Example:
```cpp
Using Stock=std::pair<int,int>;//(time,value)
std::vector<Stock> values={Stock(1,6),Stock(2,3),Stock(3,8),Stock(4,4),Stock(5,12)};
int K=42;
```

On possible buying strategy for the above example
1. Buy 3 shares at t=3 for a total price of 24. K=40-24=18
1. Buy 2 shares at t=4 for a total price of 8. K=16-8=10
1. Buy 1 shares at t=1 for a total price of 6. K=10-6=4
1. We have enough money left to buy 1 shares at t=2 for a total price of 3. K=4-3=1
1. We don't have any more money to buy shares.
1. Total number of shares bought is: 7

Implement the greedy algorithm in the file "hw2.h" in the function

```cpp
std::vector<Stock> stock(std::vector<Stock>& values, int budget);
```
The return value of function ```stock``` is a vector of the bought stocks. In the above
example it should return the vector
```cpp
{(3,8),(2,4),(1,6),(1,3)}
```


