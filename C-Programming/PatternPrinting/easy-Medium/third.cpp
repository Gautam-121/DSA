#include <iostream>
using namespace std;

/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5   

1 4 9 16 25
1 4 9 16 25 
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25

a b c d e
a b c d e
a b c d e
a b c d e
*/

int main(){

    int n , row , col;

    cout<<"Enter The Number";
    cin>>n;

    for(row=1 ; row<=n ; row++)
    {
        for(col=1 ; col<=n ;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1 ; row<=n ; row++)
    {
        for(col=1 ; col<=n ;col++)
        {
            cout<<col*col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1; row<=n ; row++)
    {
        for(col=1 ; col<=n ; col++)
        {
            char name='a' + (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}