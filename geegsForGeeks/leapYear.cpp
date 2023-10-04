//https://practice.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

/*

For an input year N, find whether the year is a leap or not. 
 

Example 1:

Input:
N = 4
Output:
1
Explanation:
4 is not divisible by 100
and is divisible by 4 so its
a leap year
Example 2:

Input:
N = 2021
Output:
0
Explanation:
2021 is not divisible by 100
and is also not divisible by 4
so its not a leap year

Your Task:
You don't need to read input or print anything. Your task is to complete the function isLeap() which takes an integer N as input parameter and returns 1 if N is a leap year and 0 otherwise.
 

*/


class Solution{
public:
    int isLeap(int N){
        //code here
        
        if(N%400 == 0) return 1;
        
        if(N%4==0 && N%100!=0) return 1;
        
        return 0;
    }
};