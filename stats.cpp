#include "stats.h"
#include <iostream>
using namespace Statistics;
using namespace std;

 computedStatss ComputeStatistics(const std::vector<double>&vec ) {
     double sum = 0;
     double min = vec[0];
     double max = vec[0];
    for (int i = 0; i < vec.size(); i++)
    {
        sum = sum + vec[i];
        if (min > vec[i])
        {
            min = vec[i];
        }
        if (max < vec[i])
        {
            max = vec[i];
        }
    }
    computedStatss a;
    a.average = sum / vec.size();
    a.max = max;
    a.min = min;
  std::cout<<(a.average)<<std::endl;
    return a;
}
