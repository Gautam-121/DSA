#include<iostream>
using namespace std;

int main(){

    int n,row,col,space;
    cout<<"Enter The Input"<<endl;
    cin>>n;

    for(row=5;row>=1;row--)
    {
        //Print Space
        for(space=1;space<=n-row;space++)
        {
            cout<<"  ";
        }

        //Print Star
        for(col=(row*2)-1;col>=1;col--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}