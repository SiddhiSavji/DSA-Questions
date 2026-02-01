#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin() + 1, nums.end());
        int sum = nums[0] + nums[1] + nums[2];
        return sum;
    }
};

int main() {
    Solution s;

    vector<int> nums = {5, 3, 1, 4, 2}; // sample input
    cout << "Minimum Cost = " << s.minimumCost(nums) << endl;

    return 0;
}
