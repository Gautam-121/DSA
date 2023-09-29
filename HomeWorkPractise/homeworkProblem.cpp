#include <iostream>
using namespace std;

/*

1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

A 
A B
A B C
A B C D 
A B C D E

10
10 11
10 11 12 13
10 11 12 13 14
10 11 12 13 14 15

A B C D
A B C
A B
A
*/

int main(){

    int n , row , col;

    cout<<"Enter The value of n";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            char name = 'a' + (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=10;row<=15;row++)
    {
        for(col=10 ; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=n; row>=1 ; row--)
    {
        for(col=1;col<=row; col++)
        {
            char name =  'a' + (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

}