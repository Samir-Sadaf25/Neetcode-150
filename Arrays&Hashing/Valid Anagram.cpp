class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n = s.length();
        if(s.length() != t.length())
           return false;
       else if(s == t)
            return true;
        else return false;    
          
    }
};
