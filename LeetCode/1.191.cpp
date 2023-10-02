#include <iostream>
using namespace std;


//leetcode.com/problems/number-of-1-bits/

/*

 int count = 0;

        cout<<n<<endl;

        int rem;

        while(n)
        {
            rem = n%2;

            cout<<rem<<' ';
            
            if(rem == 1) count++;

            n = n>>1;
        }

        return count;
    }


*/

int main(){

    //Method-1
    int n = 11;

     int count = 0;

        int rem;

        while(n)
        {
            rem = n%2;

            cout<<rem<<' ';
            
            if(rem == 1) count++;

            n = n>>1;
        }

        return count;

        //Method-2
        while(n!=0)
        {
            //Check Last Bit                        
            if(n&1) count++;
            n = n>>1;
        }
        return count;
    }
