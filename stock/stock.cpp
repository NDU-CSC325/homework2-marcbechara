#include <iostream>
#include "hw2.h"

int main()
{
    int K = 86;
    int total = 0;
    std::vector<Stock> values{ Stock(1,15),Stock(2,5),Stock(3,12),Stock(4,10),Stock(5,3),Stock(6,4),Stock(7,14)
        , Stock(8,9),Stock(9,2)
    };
   
    auto sol = stock(values, K);
    for (auto& s : sol) {
        std::cout << "(" << s.first << "," << s.second << ")\n";
    }
}
