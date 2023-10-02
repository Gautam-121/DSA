#include<iostream>
#include <math.h>
using namespace std;

int main(){

    //Method - 1
    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;

    //Method-2
    int answer = 0;

    int k;
    cin>>k;

    int j = 0;

    while(k!=0)
    {
        int rem = k%2;
        cout<<"rem"<<rem;
        answer = (rem*pow(10,j))+answer;
        k = k/2;
        j++;
    }

    cout<<"Answer is "<<answer;
}
