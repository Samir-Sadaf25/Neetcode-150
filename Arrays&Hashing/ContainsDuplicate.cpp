class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i : nums)
        {
            if(st.contains(i))
               {
                   return true;    
               }
               st.insert(i); 
        }
        return false;
    }
};
//TC: O(N)
//SC: O(N)