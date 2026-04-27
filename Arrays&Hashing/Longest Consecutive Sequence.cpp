class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> st;
       int n = nums.size();
       if(n == 0)
          return 0;
       int longest = 0;   
       for(auto num : nums)
       {
           st.insert(num);
       }
       for(auto num : st)
       {
           if(!st.contains(num-1))
           {
               int current_num = num;
               int count = 1;
               while(st.contains(current_num+1))
               {
                  current_num += 1;
                  count++;   
               }
               longest = max(longest,count);
           }
       }
       return longest;
    }
    // TC : O(N)
    // SC : O(N)
};