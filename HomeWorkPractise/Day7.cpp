#include<iostream>
using namespace std;

int main(){
    int n , row , space , col;
    cout<<"Enter The Value Of N";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //Print Space
        for(space=1;space<=n-row;space++)
        {
            cout<<" ";
        }

        //Print Star
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    cout<<endl;


    for(row=1;row<=n;row++)
    {
        //Print space
        for(space=1;space<=n-row;space++)
        {
            cout<<"  ";
        }

        for(col=1;col<=(2*row)-1;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        //Print space
        for(space=1;space<=n-row;space++)
        {
            cout<<"  ";
        }

        for(col=1;col<=row;col++)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }

        for(col=row-1;col>=1;col--)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    for(row=1;row<=n;row++)
    {
        //Print Space
        for(space=1;space<=n-row;space++)
        {
            cout<<" ";
        }

        //Print Star
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(row=5;row>=1;row--)
    {
        //Print Space
        for(space=1;space<=n-row;space++)
        {
            cout<<" ";
        }
        //Print Star
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

}