//leetcode.com/problems/power-of-two/
#include <iostream>
using namespace std;

/*

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1
 

*/

int main(){

    int n;
    cout<<"Enter The Value Of N"<<endl;

    if(n<=0) return false;

    if(n&(n-1) == 0) return true;

    return false;


    //Method-2
      if(n<=0) return false;

        int rem;

        while(n>1)
        {
            rem = n%2;
            if(rem) return false;
            n/=2;
        }
        return true;
}