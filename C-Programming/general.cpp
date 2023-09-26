#include <iostream>
using namespace std;

int main(){

    /*

    Sum Two Number
    int a , b;
    cout<<"Enter First Number"<<endl;
    cin>>a;
    cout<<"Enter Second Number"<<endl;
    cin>>b;

    cout<<a+b;

    */

   /*

   calculate SI

   int p , r , t;
   cout<<"Enter The Value of Principal"<<endl;
   cin>>p;
   cout<<"Enter The Value of Interest"<<endl;
   cin>>r;
   cout<<"Enter The Value of Time"<<endl;
   cin>>t;

   cout<<"The Simple Inter of "<<p<<" "<<"at Interest of "<<r<<" "<< "At the time of "<<t<<" is "<<(p*r*t)/100;

   */

  /*
  comapare Two Values

  int a,b;
  cout<<"Enter The Value of A"<<endl;
  cin>>a;
  cout<<"Enter The Value of B"<<endl;
  cin>>b;

  if(a>=b) cout<<"The Value of a is Greater Than or equal b";
  else cout<<"The value of b Greater Than a";

  */

 /*
 check Number Even OR Odd

 int number;
 cout<<"Enter The value and Check it is Even or Odd"<<endl;
 cin>>number;

 if(number%2==0) cout<<"The Number is Even";
 else cout<<"The Number is Odd";

 */

   /*
   Check Number positive , Negative or Zero

   int num;
   cout<<"Enter The Number"<<endl;
   cin>>num;

   if(num>0)cout<<"The Number is Positive";
   else if(num==0)cout<<"The Number is Zero";
   else cout<<"The Number Is Negative";

   */

 /*
 Check side of triangle valid or not

  int a,b,c;
  cout<<"Enter First Side Of Triangle"<<endl;
  cin>>a;
  cout<<"Enter Second Side Of Triangle"<<endl;
  cin>>b;
  cout<<"Enter Third Side Of Triangle"<<endl;
  cin>>c;

  if(a>0 && b>0 && c>0 && (a+b>c) && (b+c>a) && (a+c>b))
  {
    cout<<"This is Valid Triangle";
  }
  else
  {
    cout<<"This is Invalid Triangle";
  }

 */

 /*
 Print Value From 1 to N

int n,i;
cout<<"Enter Value of n"<<endl;
cin>>n;

for(i=1;i<=n;i++)
{
    cout<<i<<" ";
}

 */

/*
Print All Even Number From 1 To N
Print All Odd Number From 1 TO N

int num , i;
cout<<"Enter Value of num"<<endl;
cin>>num;

for(i=2; i<=num; i+=2)
{
    cout<<i<<" ";
}

for(i=1;i<=num;i++)
{
    if(i%2==0) cout<<i<<" ";
}

for(i=1;i<=num;i+=2)
{
    cout<<i<<" ";
}

for(i=1;i<=num;i++)
{
    if(i%2==1) cout<<i<<" ";
}

*/

/*
find Sum from 1 to n

int n , i;
cout<<"Enter Value of N upto You Want Sum"<<endl;
cin>>n;

int sum=1;

for(i=2;i<=n;i++)
{
    sum+=i;
}

cout<<sum;
*/

/*
Find Factorial of n

int n,i;
cout<<"Enter The Value of n"<<endl;
cin>>n;

long long  product = 1;

for(i=2;i<=n;i++)
{
    product=product*i;
}

cout<<product;

*/

/*
Check Number Prime Or Not

int n , i;
cout<<"Enter The Value OF N";

if(n<2){
    cout<<"The Number Is Not Prime";
    return 0;
}

if(n==2){
    cout<<"Number is Prime";
    return 1;
}

for(i=2 ; i<n ; i++)
{
    if(n%i==0){
        cout<<"Number Is Not Prime";
        return 0;
    }
}

cout<<"Number is Prime";

*/









}