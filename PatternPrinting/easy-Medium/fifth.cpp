#include <iostream>
using namespace std;

/*

*
* *
* * *
* * * *
* * * * *

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

1
2 2 
3 3 3
4 4 4 4
5 5 5 5 5

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

A 
B B
C C C

A 
B C
D E F
G H I J

A 
B C
C D E
D E F G

D 
C D
B C D
A B C D

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/

int main(){

    int n, row , col;

    cout<<"Enter the Value of n";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1; col<=row ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(row=1 ;row<=n ; row++)
    {
        for(col=1 ; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(row=1 ; row<=n; row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1 ; row<=n ; row++)
    {
        for(col=row;col>=1;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1 ; row<=n ; row++)
    {
        for(col=1;col<=row;col++)
        {
            char name = 'A'+(row-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int k = 1;

    for(row=1 ; row<=n ; row++)
    {
        for(col=1;col<=row;col++)
        {
            char name = 'A'+(k-1);
            cout<<name<<" ";
            k++;
        }
        cout<<endl;
    }

    cout<<endl;

     for(row=1 ; row<=n ; row++)
    {
        for(col=row;col<2*row;col++)
        {
            char name = 'A'+(col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1 ; row<=n ; row++)
    {
        for(col=row;col<2*row;col++)
        {
            char name = 'A'+(n-col);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}