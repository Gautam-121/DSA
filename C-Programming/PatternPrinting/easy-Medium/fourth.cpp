#include <iostream>
using namespace std;

/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

A A A
B B B
C C C

A B C
A B C
A B C

A B C
D E F
G H I

A B C
B C D
C D E
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

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            char name = 'A' + (row-1);
            cout<<name;
        }
        cout<<endl;
    }
    cout<<endl;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int k = 1;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            char name = 'A' + (k-1);
            cout<<name<<" ";
            k++;
        }
        cout<<endl;
    }
    cout<<endl;

    for(row=1;row<=n;row++)
    {
        for(col=row;col<n+row;col++)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
}
