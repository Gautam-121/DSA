#include<iostream>
using namespace std;

int main(){

   

    /*

     int i=1;

    while(i<=n)
    {
        cout<<i<<" ";
        i++;
    }

    cout<<endl;

    int product = 1;

    int j=2;
    
    while(j<=n)
    {
        product*=j;
        j++;
    }

    cout<<product<<endl;

    
    int k=1;

    while(k<=n)
    {
        if(k%3!=0|| k%5!=0){
            cout<<k<<" ";
        }
        k++;
    }

    int month;
    cout<<"Enter The Value Of N"<<endl;
    cin>>month;

   switch(month)
   {
    case 1 : {
        cout<<"January"<<endl;
    }
    break;
    case 2 : {
        cout<<"February"<<endl;
    }
    break;
    case 3 : {
        cout<<"March"<<endl;

    }
    break;
    case 4 : {
        cout<<"April"<<endl;
    }
    break;
    default : {
         cout<<"None"<<endl;
    }
   }

   cout<<endl;

   
   char capital = 'A';

   while(capital<='Z')
   {
    cout<<capital<<" ";
    capital = capital + 1;
   }


   
   char small = 'a';

   while(small<='z')
   {
    cout<<small<<" ";
    small = small + 1;
   }
    
    */

   int number;
   cout<<"Enter The Input"<<endl;
   cin>>number;

   if(number<2){
    cout<<"Not Prime";
    return 0;
   }

   if(number == 2){
    cout<<"It is Prime Number";
    return 1;
   }

   int i=2;

   while(i<number)
   {
     if(number%i==0)
     {
        cout<<"Not Prime";
        return 0;
     }

     i++;
   }

   cout<<"It is Prime";
   return 1;

   


}