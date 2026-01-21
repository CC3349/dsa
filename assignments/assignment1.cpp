//q1 Write a program (WAP) to display "Hello World" on console display.
//#include<iostream>
//using namespace std;
//
//int main(){
//cout<<"Hello World"<<endl;
//return 0;
//}

//q2 WAP to input an integer, decimal and character and display it.
//#include<iostream>
//using namespace std;
//
//int main(){
//int num;
//float decimal;
//char ch;
//
//cout<<"Enter an integer: "<<endl;
//cin>>num;
//cout<<"Enter a decimal number: "<<endl;
//cin>>decimal;
//cout<<"Enter a character: "<<endl;
//cin>>ch;
//
//cout<<"\n you entered:\n";
//cout<<"Integer: "<<num<<endl;
//cout<<"Decimal: "<<decimal<<endl;
//cout<<"character: "<<ch<<endl;
//return 0;
//}


//q3 WAP to add, subtract, multiply, divide numbers.
//#include<iostream>
//using namespace std;
//
//int main(){
//double num1, num2;
//cout<<"First number: "<<endl;
//cin>>num1;
//cout<<"Second number: "<<endl;
//cin>>num2;
//double sum=num1+num2;
//double difference=num1-num2;
//double product=num1*num2;
//cout<<"sum: "<<sum<<endl;
//cout<<"difference: "<<difference<<endl;
//cout<<"product: "<<product<<endl;
//if(num2 != 0){
//double division=num1/num2;
//cout<<"division: "<<division<<endl;
//}
//else {
//cout<<"devision undefined"<<endl;
//}
//
//
//return 0;
//}


//q3 Write a C++ program that will ask for a temperature in Celsius and display it in degree
//     Fahrenheit.[F=9C/5+32]
//#include <iostream>
//using namespace std;
//
//int main() {
//    double celsius, fahrenheit;
//
//    cout << "Enter temperature in Celsius: ";
//
//    // Input validation
//    if (!(cin >> celsius)) {
//        cout << "Invalid input! Please enter a number.";
//        return 0;
//    }
//
//    fahrenheit = (9.0 / 5.0) * celsius + 32;
//
//    cout << "Temperature in Fahrenheit: " << fahrenheit << " °F";
//
//    return 0;
//}


//q5 WAP to format console output using '\n', '\t', '\b' , endl, setw within cout statement
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    cout << "Hello\nWorld" << endl;          // New line using \n and endl
//
//    cout << "Name\tAge\tCity\n";             // Tab space using \t
//    cout << "Ram\t20\tDelhi\n";
//
//    cout << "C++ Progra\b\b\b\b\b\bLanguage" << endl;  // Backspace using \b
//
//    cout << setw(10) << "ID"
//         << setw(10) << "Name"
//         << setw(10) << "Marks" << endl;
//
//    cout << setw(10) << "101"
//         << setw(10) << "Aman"
//         << setw(10) << "85" << endl;
//
//    return 0;
//}


//q6  WAP to utilize assignment +=  and  - =  type operators.
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a = 10;
//
//    cout << "Initial value of a: " << a << endl;
//
//    a += 5;   // a = a + 5
//    cout << "After a += 5, a = " << a << endl;
//
//    a -= 3;   // a = a - 3
//    cout << "After a -= 3, a = " << a << endl;
//
//    return 0;
//}


//q7 WAP to swap two numbers using bitwise operator.
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//
//    cout << "Before swapping:\n";
//    cout << "a = " << a << ", b = " << b << endl;
//
//    // Swapping using XOR
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//
//    cout << "After swapping:\n";
//    cout << "a = " << a << ", b = " << b << endl;
//
//    return 0;
//}


//q8 Write a program to solve the following problem
//     A library charges a fine for every book return late. For first 5 days the fine is 50 paise, for
//     6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book
//     after 30 days your membership will be cancelled .WAP to accept no. of days the member
//     is late to return the book and display the fine or appropriate message.
//#include <iostream>
//using namespace std;
//
//int main() {
//    int days;
//    float fine = 0;
//
//    cout << "Enter number of days late: ";
//    cin >> days;
//
//    if (days <= 5) {
//        fine = days * 0.50;
//        cout << "Fine = Rs. " << fine;
//    }
//    else if (days <= 10) {
//        fine = (5 * 0.50) + (days - 5) * 1.0;
//        cout << "Fine = Rs. " << fine;
//    }
//    else if (days <= 30) {
//        fine = (5 * 0.50) + (5 * 1.0) + (days - 10) * 5.0;
//        cout << "Fine = Rs. " << fine;
//    }
//    else {
//        cout << "Membership cancelled!";
//    }
//
//    return 0;
//}

//q9 WAP to display arithmetic operations using switch-case statement.
//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, y;
//    char op;
//
//    cout << "Enter two numbers: ";
//    cin >> x >> y;
//
//    cout << "Enter operator (+, -, *, /): ";
//    cin >> op;
//
//    switch (op) {
//        case '+':
//            cout << "Result = " << x + y;
//            break;
//
//        case '-':
//            cout << "Result = " << x - y;
//            break;
//
//        case '*':
//            cout << "Result = " << x * y;
//            break;
//
//        case '/':
//            if (y != 0)
//                cout << "Result = " << (float)x / y;
//            else
//                cout << "Cannot divide by zero";
//            break;
//
//        default:
//            cout << "Invalid operator";
//    }
//
//    return 0;
//}


//q10  WAP to check whether the given number is even or odd (By using if-else and conditional
//      operator).
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//
//    cout << "Enter a number: ";
//    cin >> num;
//
//    // Using if-else
//    if (num % 2 == 0)
//        cout << "Using if-else: Number is Even" << endl;
//    else
//        cout << "Using if-else: Number is Odd" << endl;
//
//    // Using conditional operator
//    cout << "Using conditional operator: ";
//    (num % 2 == 0) ? cout << "Even" : cout << "Odd";
//
//    return 0;
//}



