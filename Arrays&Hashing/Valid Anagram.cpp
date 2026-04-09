// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         int n = s.length();
//         if(s.length() != t.length())
//            return false;
//        else if(s == t)
//             return true;
//         else return false;    
          
//     }
// };

// Optimize solution :
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        for(char c : s)
               count[c-'a']++;
        for(char c : t)
                count[c-'a']--;
        for(int x : count)
        {
            if(x != 0)
              return false;
        }
        return true;         
          
    }
};
