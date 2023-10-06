 #include <iostream>
using namespace std;

char convert(char name){
    name = 'A' + (name - 97);
    return name;
}

int main(){
    
    char name;
    cout<<"Enter The Character You Want To Convert"<<endl;
    cin>>name;

    char convertValue = convert(name);
    cout<<convertValue;
}