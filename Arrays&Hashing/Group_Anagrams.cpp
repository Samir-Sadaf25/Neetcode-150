// https://leetcode.com/problems/group-anagrams/description/
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         int n = strs.size();
//         vector<vector<string>> result;
//         unordered_map<string,vector<string>> mp;
//         for(int i = 0; i < n; i++)
//         {
//             string temp = strs[i];
//             sort(begin(temp),end(temp));
//             mp[temp].push_back(strs[i]);
//         }
//         for(auto it : mp)
//         {
//             result.push_back(it.second);
//         }
//         return result;
//     }
//     //TC : O M*(nLogn)
// };

// Optimal solution 
class Solution {
public:
    
    string Genarate(string word)
    { 
        int arr[26] = {0};
        for(char ch : word)
        {
            arr[ch - 'a']++;
        }
        string new_word = "";
        for(int i = 0; i < 26;i++)
        {
            int freq = arr[i];
            new_word += string(freq,i+'a');
        }  
        return new_word;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;
        int n = strs.size();
        for(int i = 0; i < n;i++)
        {
            string word = strs[i];
            string new_word = Genarate(word);
            mp[new_word].push_back(strs[i]);
        }
        for(auto it : mp)
        {
            result.push_back(it.second);
        }
        return result;
    }
    // TC : O(N * (K + 26)) where n is the length of the string..each string i traverse kth times..
};