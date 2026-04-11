// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<int> ans;
//         for(int i = 0; i < n;i++ )
//         {
//             for(int j = i+1; j < n;j++)
//             {
//                 if((nums[i] + nums[j]) == target )
//                    {
//                       ans.push_back(i);
//                       ans.push_back(j);
//                       return ans;
//                    }
//             }
//         }
        
//     }
// };
// Optimal solution o(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mp;
        for(int i = 0;i<n;i++)
        {
            int remaining = target - nums[i];
            if(mp.find(remaining) != mp.end())
            {
                return {mp[remaining],i};
            }
            mp.insert({nums[i],i});
        }
        return {};
    }
};