
//leetcode.com/problems/add-digits/

/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1
*/
class Solution {
public:
    int addDigits(int num) {

        int ans = 0;
        int rem;

       while(num>9)
       {
            while(num!=0)
            {
                rem = num%10;
                ans =  ans + rem;
                num = num/10;
            }
               num = ans;
               ans = 0;
       }
       return num;
    }
};