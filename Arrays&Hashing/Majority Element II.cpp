class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        unordered_map<int,int> mp;
        int n = nums.size();
        int appear = abs(n/3);
        for(auto num : nums)
        {
            mp[num]++;
        }
        for(auto it : mp)
        {
            if(it.second > appear)
            {
                result.push_back(it.first);
            }
        }
        return result;
    }
    // TC: O(N)
    // SC: O(N)
}; 