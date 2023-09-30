#include<iostream>
using namespace std;

int main(){

    /*

    First Problem

    int a,b;
    cout<<"Enter The First Number"<<endl;
    cin>>a;
    cout<<"Enter The Second Number"<<endl;
    cin>>b;

    if(a>b)
    {
        cout<<"A is Greater Than B";
    }
    else if(b>a)
    {
        cout<<"B is Greater Than A";
    }
    else
    {
        cout<<"Both Are Equal";
    }

    */

   /*

   Problem Second

   int age;
   cout<<"Enter Your Age"<<endl;
   cin>>age;

   if(age>18){
    cout<<"You Atra Adult";
   }
   else
   {
    cout<<"You Are TeenAger";
   }

   */

  /*

  Third Problem
  int month;
  cout<<"Enter Number And I will Say The Month , The number in Between 0 to 13"<<endl;

  cin>>month;

  switch(month)
  {
    case 1 : {
        cout<<"January";
    }
    break;
    case 2 : {
        cout<<"Feb";
    }
    break;
    case 3 : {
        cout<<"March";
    }
    break;
    case 4 : {
        cout<<"April";
    }
    break;
    case 5 : {
        cout<<"May";
    }
    break;
    case 6 : {
        cout<<"June";
    }
    break;
    case 7 : {
        cout<<"July";
    }
    break;
    case 8 : {
        cout<<"August";
    }
    break;
    case 9 : {
        cout<<"September";
    }
    break;
    case 10 : {
        cout<<"Octomber";
    }
    break;
    case 11 : {
        cout<<"November";
    }
    break;
    default: {
        cout<<"December";
    }
  }
  */

 /*

 Fourth Problem

 
 int age;
 cout<<"Enter Your Age"<<endl;
 cin>>age;

 if(age<12 || age>65){
    cout<<"Eligible For Discount";
 }
 else
 {
    cout<<"Not Eligible For Discount";
 }

 */


/*
Fifth Problem

for(int i=1;i<=20;i++)
{
    cout<<"India will win the World Cup 2023";
}

*/

/*

Fifth Problem

int number;
cout<<"Enter The Number"<<endl;
cin>>number;

for(int i=1;i<=number; i+=2)
{
    cout<<i<<" ";
}

*/


int number;
cout<<"Enter Your Number"<<endl;
cin>>number;

for(int i=1;i<=number;i++)
{
    if(i%4==0)cout<<i<<" ";
}


}