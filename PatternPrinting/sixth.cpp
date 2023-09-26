#include <iostream>
using namespace std;

/*
a
b b 
c c c
d d d d
e e e e e
f f f f f f
*/

int main(){

    int n , row , col ;

    cout<<"Enter The value of N";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1 ; col<=row; col++)
        {
            char name = 'a' + (row-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}