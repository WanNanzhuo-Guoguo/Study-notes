#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution s;

    vector<int> nums = {2,7,11,15};

    vector<int> ans = s.twoSum(nums, 9);

    cout << ans[0] << " " << ans[1];

    return 0;
}