class Solution {
public: // bucket sort
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<vector<int>> bucket(n+1);
        for(auto num : nums)
            mp[num]++;
        for(auto it : mp)
        {
            int freq = it.second;
            int element = it.first;
            bucket[freq].push_back(element); // bucket er index = map er frequency
        }
        vector<int> result;
        // pick element from right -> left to find max frequencies elements
          for(int i = n; i>= 0;i--)
        {
            if( k == 0) 
                break;
            if(!bucket[i].empty()) // bucket[i] empty na hoile element pick korbo
            {
                for(auto element : bucket[i])
                {
                    result.push_back(element);
                    k--;
                    if(k == 0) // jodi loop er vitore result paia jai return kore dibo 
                      return result;
                }
            }    

        }
        return result;    
    } 
    //TC : O(N)
    //SC : O(N)
};
