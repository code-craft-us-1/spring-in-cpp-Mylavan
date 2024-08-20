#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct computedStatss
    {
        long average=0;
        long max=0;
        long min=0;
    };
    computedStatss ComputeStatistics(const std::vector<double>&vec);
}
