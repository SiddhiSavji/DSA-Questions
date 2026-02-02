#include <vector>
#include<iostream>
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (nums[i] + nums[j] == target) 
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution s;

    vector<int> nums={3,5,7,2,9,5};
    int target=10;


    vector<int> result=s.twoSum(nums,target);
    for(int i:result)
    {
        cout<<i<<" ";
        cout<<endl;
    }
return 0;

}

