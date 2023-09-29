#include <iostream>
using namespace std;

/*
5 
5 4 
5 4 3
5 4 3 2
5 4 3 2 1 
*/

int main(){

    int n , row , col;

    cout<<"Enter the value of n";
    cin>>n;

    for(row=n;row>=1; row--)
    {
        for(col=n; col>=row; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}