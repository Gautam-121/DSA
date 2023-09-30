#include <iostream>
using namespace std;

int main(){

    int n , row , col;
    cout<<"Enter The Value Of N"<<endl;
    cin>>n;

    for(row=1;row<=n; row++)
    {
        for(col=1;col<=n;col++)
        {
            cout<<"4 ";
        }

        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n; row++)
    {
        for(col=1;col<=n;col++)
        {
            cout<<col*col<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n; row++)
    {
        for(col=1;col<=n;col++)
        {
            cout<<col*col*col<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            char name = 'F' + (col-1);
            cout<<name<<" ";
        }

        cout<<endl;
    }

    cout<<endl;


}