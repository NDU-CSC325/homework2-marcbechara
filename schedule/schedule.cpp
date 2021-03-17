#include <iostream>
#include "hw2.h"

int main()
{
    std::vector<Job> jobs{ Job(2,3),Job(14,24),Job(18,26),Job(12,29),Job(15,38) };
    std::cout << finish(jobs) << "\n";
    auto sol = schedule(jobs);
    for(auto& j:sol)
        std::cout << "(" << j.first << "," << j.second << ")\n";

    std::cout << "completion time\n";
    std::cout << finish(sol) << "\n";

   
}
