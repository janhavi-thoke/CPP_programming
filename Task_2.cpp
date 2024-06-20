#include <iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    char ch;
    cout<<"Choose any operation:"<<endl;
    cin>>ch;
    switch(ch){
        case '+':
        cout<<"Addition:"<<a+b<<endl;
        break;
        case '-':
        cout<<"Subtraction:"<<a-b<<endl;
        break;
        case '*':
        cout<<"Multiplication:"<<a*b<<endl;
        break;
        case '/':
        cout<<"Division:"<<a/b<<endl;
        break;
        default:
        cout<<"Wrong choice...."<<endl;
        return 0;

    }

}
