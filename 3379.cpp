#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            
            if (nums[i] == 0) {
                result[i] = nums[i];
            }
            else {
                int target = (i + nums[i]) % n;

                // handle negative modulo
                if (target < 0) target += n;

                result[i] = nums[target];
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums = {3, -2, 1, 1};

    Solution s;
    vector<int> ans = s.constructTransformedArray(nums);

    cout << "Transformed Array: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
