#include "stats.h"
#include <iostream>
using namespace Statistics;
using namespace std;

// computedStatss ComputeStatistics(const std::vector<double>&vec ) {
//     double sum = 0;
//     double min = vec[0];
//     double max = vec[0];
//    for (int i = 0; i < vec.size(); i++)
//    {
//        sum = sum + vec[i];
//        if (min > vec[i])
//        {
//            min = vec[i];
//        }
//        if (max < vec[i])
//        {
//            max = vec[i];
//        }
//    }
//    computedStatss a;
//    a.average = sum / vec.size();
//    a.max = max;
//    a.min = min;
//    return a;
//}

 computedStatss Statistics::ComputeStatistics(const std::vector<double>& vec)
 {
     computedStatss stats;

     if (vec.empty()) {
         stats.average = 0.0;
         stats.min = 0.0;
         stats.max = 0.0;
     }
     else {
         stats.average = std::accumulate(vec.begin(), vec.end(), 0.0) / vec.size();
         stats.min = *std::min_element(vec.begin(), vec.end());
         stats.max = *std::max_element(vec.begin(), vec.end());
     }

     return stats;
 }
