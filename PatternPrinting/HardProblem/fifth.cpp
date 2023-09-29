#include <iostream>
using namespace std;

/*

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * * 
* * *         * * *
* *             * *
*                 *

*/

int main(){

    int n,space,row,col;
    cout<<"Enter The Input"<<endl;
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //Print Start
        for(col=1; col<=row;col++)
        {
            cout<<"* ";
        }

        for(space=1;space<=(n-row)*2 ; space++)
        {
            cout<<"  ";
        }

        //Print Start
        for(col=1; col<=row;col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(row=n-1;row>=1;row--)
    {
        //Print Star
        for(col=row; col>=1 ; col--)
        {
            cout<<"* ";
        }

        //Print Space
        for(col=1; col<=(n-row)*2 ; col++)
        {
            cout<<"  ";
        }
        //Print Star
        for(col=row; col>=1 ; col--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}