// Leetcode premium Question
// https://neetcode.io/problems/string-encode-and-decode/question
// Solution Explaination : https://neetcode.io/problems/string-encode-and-decode/discuss/6RWUN5AKk29Z6hJZ3lqu
class Solution {
public:

    string encode(vector<string>& strs) {
          string encoded = "";
          for(auto str : strs )
          {
             encoded += to_string(str.size()) + "#";
             encoded += str;
          }
          return encoded;
    }

    vector<string> decode(string s) {
        // we got 5#Hello5#World
        vector<string> result;
        int i = 0;
        while(i < s.size())
        {
            int j = i;
                //find #
            while(s[j] != '#')
                 j++;
                //get length
            int len = stoi(s.substr(i,j-i));
                // extract string
            string str = s.substr(j + 1,len);
            result.push_back(str);
                //move pointer
            i = j + 1 + len;  // ex. 1 + 1 + 5      
        }
        return result;
    }
    // TC : O(N)
    // SC : O(N)
};
