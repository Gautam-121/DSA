#include<iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter THE nUMBER"<<endl;

    cin>>n;

    int ans = 0;

    int i =0;

    while(n!=0)
    {
        int lastBit =  n%10;

        if(lastBit){
            ans = ans + pow(2,i);
        }
        i++;
        n = n/10;
    }

    cout<<"Answer Is "<<ans;
}