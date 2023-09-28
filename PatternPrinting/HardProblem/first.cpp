#include<iostream>
using namespace std;

/*

    *    
   ***   
  *****  
 ******* 
*********

*/

int main(){

    int n , row , star , space;
    cout<<"Enter The Value of N"<<endl;
    cin>>n;

    for(row=1 ; row<=n ; row++)
    {
        //Print space
        for(space=1;space<=(n-row);space++)
        {
            cout<<" ";
        }

        //Print star
        for(star=1 ; star<=(2*row)-1 ; star++)
        {
            cout<<"*";
        }

        cout<<endl;

    }
}