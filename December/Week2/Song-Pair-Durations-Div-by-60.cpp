#include <algorithm>
#include <vector>

using std::vector;

class Solution {
public:

    int numPairsDivisibleBy60(vector<int>& time) {
        
        int remainder[60] = {};

        for (auto song : time) remainder[song % 60]++;

        int count = 0;

        for (int i=1; i < 30; i++) count += remainder[i] * remainder[60 - i];

        count += remainder[0] * (remainder[0] - 1) / 2;
        count += remainder[30] * (remainder[30] - 1) / 2;

        return count;
        
    }

};