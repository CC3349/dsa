#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout<<"Calculator"<<endl;
    cout<< "Enter first number: ";
    cin>>num1;

    cout<<"Enter operator (+, -, *, /): ";
    cin>>op;

    cout<<"Enter second number: ";
    cin>>num2;

    switch(op) {
        case '+':
            cout<<"ans = "<< num1 + num2;
            break;

        case '-':
            cout<<"ans= "<< num1 - num2;
            break;

        case '*':
            cout<<"ans = "<< num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout<<"ans = "<< num1 / num2;
            else
                cout<< "Error division by zero";
            break;

        default:
            cout<<"Invalid operator";
    }

    return 0;
}
