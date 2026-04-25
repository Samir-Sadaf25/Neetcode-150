      // Brute force solution
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> result(n,1);
//         for(int i = 0;i < n;i++)
//         {
//             for(int j = 0;j<n;j++)
//             {
//                 if(j == i)
//                   continue;
//                 result[i] *=  nums[j];
//             }
//         }
//         return result;
//     }
//     // TC : O(n^2)
// };
          //Naive Approach using Division 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int count_zero = 0;
        int product_without_zero = 1;
        for(auto num : nums)
        {
            if(num == 0)
               count_zero++;
            else
               product_without_zero *= num;   
        }
        vector<int> result(n);
        for(int i = 0;i<n;i++)
        {
            int num = nums[i];
            if(num != 0)
            {
                if(count_zero > 0)
                   result[i] = 0;
                else   
                   result[i] = product_without_zero/num;
            }
            else
            {
                if(count_zero > 1)
                   result[i] = 0;
                else
                   result[i] = product_without_zero;   
            }
        }
        return result;
    }
    // TC : O(N)
    // SC : O(1)
};
// Optimal solution O(N) Without Division

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        res[0] = 1;
        for(int i = 1; i< n;i++)
        {
            res[i] = res[i-1] * nums[i-1];
        }
        int right_product = 1;
        for(int i = n-1;i>=0;i--)
        {
            res[i] = res[i] * right_product;
            right_product *= nums[i];
        }
        return res;

    }
};