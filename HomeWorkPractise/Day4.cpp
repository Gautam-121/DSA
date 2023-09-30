#include <iostream>
using namespace std;

int main(){

    int n , row , col;
    cout<<"Enter The Value OF N";
    cin>>n;


    for(row=1;row<=n;row++)
    {
        for(col=1 ; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        for(col=1 ; col<=row; col++)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<endl;


    for(row=10;row<=10+n;row++)
    {
        for(col=10 ; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=n; row>=1 ; row--)
    {
        for(col=1; col<=row; col++)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }

        cout<<endl;
    }
}