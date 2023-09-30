#include<iostream>
using namespace std;

int main(){

    /*

    First Problem

    for(int i=280;i>=250;i--)
    {
        cout<<i<<" ";
    }

    */

    /*

    for(char name='A';name<='Z';name = name + 1)
    {
        cout<<name<<" ";
    }
    */

   /*

   for(char name = 'z';name>='a';name = name-1)
   {
    cout<<name<<" ";
   }
   */

  /*

   for(int first = 220 ; first<=730 ; first+=7 )
  {
    cout<<first<<" ";
  }
  */

 /*

 int n , i;
 cout<<"Enter The Value Of N"<<endl;
 cin>>n;
 int sum=0;

 for(i=1;i<=n;i++)
 {
    sum+=i*i*i;
 }

 cout<<sum;
 */

int n;
cout<<"Enter The Value Of n"<<endl;
cin>>n;

int first = 0;
int second = 1;

if(n==1){
     cout<< first; 
    return 1;
}

if(n==2){
     cout<< second; 
     return 1;
}

int fiboNumber;

for(int i=1 ;i<=n-2 ; i++)
{
    fiboNumber = first + second;
    first = second;
    second = fiboNumber;
}

cout<<fiboNumber;





 
 
}