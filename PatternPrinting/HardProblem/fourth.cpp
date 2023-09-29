#include <iostream>
using namespace std;

/*

* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *

*/

int main(){

    int n,space,row,col;
    cout<<"Enter The Input"<<endl;
    cin>>n;

    for(row=n;row>=1;row--)
    {
        //Print star
        for(col=row;col>=1;col--)
        {
            cout<<"* ";
        }

        //Print Space
        for(space=1;space<=(n-row)*2 ; space++)
        {
            cout<<"  ";
        }

        //Print Star
        for(col=row;col>=1;col--)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(row=1;row<=n;row++)
    {
        //Print star
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }

        //Print Space
        for(space=1;space<=(n-row)*2 ; space++)
        {
            cout<<"  ";
        }

        //Print Star
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}