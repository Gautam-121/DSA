#include <iostream>
using namespace std;

/*

1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

a a a a a
b b b b b
c c c c c
d d d d d
e e e e e


*/

int main(){

    int n , row , col;

    cout<<"Enter THe Print Number";

    cin>>n;

    for(row=1 ;row<=n ; row++)
    {
        for(col=1 ; col<=n ; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n; row++)
    {
        char name = 'a' + (row-1);

        for(col=1;col<=n ; col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}