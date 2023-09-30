#include <iostream>
using namespace std;

int main(){

    int n , row , col , space;
    cout<<"Enter The Input"<<endl;
    cin>>n;

    for(row=1 ; row<=n; row++)
    {
        //Print Space
        for(space=1; space<=n-row; space++)
        {
            cout<<"  ";
        }

        for(col=row ; col>=1 ; col--)
        {
            cout<<col<<" ";
        }

        cout<<endl;

        //Print Number
    }

    cout<<endl;


    for(row=1 ; row<=n; row++)
    {
        //Print Space
        for(space=1; space<=n-row; space++)
        {
            cout<<"  ";
        }

        char name = 'A' + (row-1);

        for(col=row ; col>=1 ; col--)
        {
            cout<<name<<" ";
        }

        cout<<endl;

    }

    cout<<endl;

    for(row=n ; row>=1; row--)
    {
        //Print Space
        for(space=1; space<=(row-1); space++)
        {
            cout<<"  ";
        }

        for(col=n ; col>=row ; col--)
        {
            cout<<col<<" ";
        }

        cout<<endl;

        //Print Number
    }

    cout<<endl;


    for(row=n ; row>=1; row--)
    {
        //Print Space
        for(space=1; space<=(row-1); space++)
        {
            cout<<"  ";
        }

        for(col=n ; col>=row ; col--)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }

        cout<<endl;

        //Print Number
    }

    cout<<endl;
}