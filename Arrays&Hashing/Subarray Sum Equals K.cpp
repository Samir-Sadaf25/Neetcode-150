class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int s = 0;s <= n-1;s++)
        {
            for(int e = s;e<=n-1;e++)
            {
                int sum = 0;
                for(int i = s;i<=e;i++)
                {
                    sum += nums[i];
                }
                if(sum == k)
                   count++;
            }
        }
        return count;
    }
    // TC : O(N) 
    // SC : O(N)

};