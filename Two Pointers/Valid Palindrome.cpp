class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        if(s.empty())
           return true;
        for(char c : s)
        {
            if (isalnum(c))
            {
                result += tolower(c);
            }
        }
        int i = 0;
        int j = result.size()-1;
        while(i < j)
        {
        
            if(result[i] != result[j])
               return false;
            
            i+=1;
            j-=1;

        }
        return true;
    }
};