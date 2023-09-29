#include <iostream>
using namespace std;

/*

   *
  * *
 * * *
* * * *
* * * *
 * * *
  * *
   *

*/


int main(){

    int n, row , col , space;
    cout<<"Enter The Input"<<endl;
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //print space
        for(space=1;space<=(n-row);space++)
        {
            cout<<" ";
        }

        for(col=1;col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(row=n;row>=1;row--)
    {
        //print space
        for(space=1;space<=(n-row);space++)
        {
            cout<<" ";
        }

        for(col=1;col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
