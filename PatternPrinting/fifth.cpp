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
}