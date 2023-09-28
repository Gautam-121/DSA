#include <iostream>
using namespace std;

/*

    1
   121
  12321
 1234321
123454321

*/

int main(){

    int n,row,space, col;
    cout<<"Enter The Value Of N"<<endl;
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //Print Space
        for(space=1;space<=n-row;space++)
        {
            cout<<"  ";
        }

        //Print 1 to row
        for(col=1 ; col<=row ; col++)
        {
            cout<<col<<" ";
        }

        //print row-1 to 1;

        for(col=row-1 ; col>=1 ; col--)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }
}