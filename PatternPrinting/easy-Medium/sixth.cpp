#include <iostream>
using namespace std;

/*
a
b b 
c c c
d d d d
e e e e e
f f f f f f

1
2 3
4 5 6
7 8 9 10

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

1
2 1
3 2 1
4 3 2 1
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

    cout<<endl;

    int k = 1;

    for(row=1;row<=n;row++)
    {
        for(col=1 ; col<=row; col++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        for(col=row ; col<2*row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        for(col=row ; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}