//leetcode.com/problems/reverse-integer/

#include <iostream>
using namespace std;

/*

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

*/

int main(){

    int x;
    cout<<"Enter The VALUE OF X"<<endl;
    cin>>x

    int ans = 0;
    int digit;

    while(x)
    {
        digit = x%10;

        if(ans>INT_MAX/10 || ans<INT_MIN/10) return 0;

        ans = (ans*10) + digit;

        x = x/10;
    }

    cout<<ans;
}