#include<iostream>
using namespace std;
#include <math.h>

int count(int number)
{
    int cnt = 0;

    while(number)
    {
        cnt++;
        number/=10;
    }
    
    return cnt;
}

bool armstrong(int number)
{
    int counting = count(number);

    int oldNumber = number;
    int sum = 0 , digit ;

    while(number)
    {
        digit = number%10;
        number/=10;
        sum+=pow(digit,counting);
    }
    
    return (oldNumber == sum);
}

//Chech the Number is Armstrong Number or Not
int main(){

    int number;
    cout<<"Enter The Number"<<endl;
    cin>>number;

    bool newNumber = armstrong(number);

    if(newNumber){
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Is Not A Amstrong Number";
    }
}