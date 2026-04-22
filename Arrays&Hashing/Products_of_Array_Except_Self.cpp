// Brute force solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,1);
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(j == i)
                  continue;
                result[i] *=  nums[j];
            }
        }
        return result;
    }
    // TC : O(n^2)
};
