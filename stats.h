#include <vector>
#include <numeric>
#include <algorithm>
namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct computedStatss
    {
        double average=0;
        double max=0;
        double min=0;
    };
    computedStatss ComputeStatistics(const std::vector<double>&vec);
}
