#include <iostream>
using namespace std;

/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

int main(){

    int n , row , col;

    cout<<"Enter The Number";
    cin>>n;

    for(row=1 ; row<=n ; row++)
    {
        for(col=n ; col>=1 ; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
