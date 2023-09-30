#include<iostream>
using namespace std;

/*
        *
      * *
    * * *
  * * * *
* * * * *

        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

        A 
      A B
    A B C
  A B C D
A B C D E

        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1


*/

int main(){

    int n,row,col,space;
    cout<<"Enter THe Input"<<endl;
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //Print Space
        for(space=1;space<=n-row;space++)
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

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        //Print Space
        for(space=1;space<=(n-row);space++)
        {
            cout<<"  ";
        }

        for(col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        //Print Space
        for(space=1;space<=(n-row);space++)
        {
            cout<<"  ";
        }

        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        //Print Space
        for(space=1;space<=(n-row);space++)
        {
            cout<<"  ";
        }

        for(col=1;col<=row;col++)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }

        cout<<endl;
    }

    cout<<endl;


    for(row=1;row<=n;row++)
    {
        //Print Space
        for(space=1;space<=(n-row);space++)
        {
            cout<<"  ";
        }

        for(col=row;col>=1;col--)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }

}