#include<iostream>
using namespace std;
int main(){
//1 arithmetic operators +-*/%
int a=10,b=6;
cout<<"sum = "<<a+b<<endl;
cout<<"difference = "<<a-b<<endl;
cout<<"product = "<<a*b<<endl;
cout<<"modulo = "<<a%b<<endl;
cout<<"division = "<<a/b<<endl;
// divide main int/int will give int
//int/float or int/double will give float or viceaversa
//kyunki float>precision and decimal value than int

cout<<(5/(double)2)<<endl;//typecasting use krk decimal main answer

// 2 relational operators <=>!=
//they return either true or false
cout<<(3>=5)<<endl;


//3 logical operators or and not || &&
// or f when all f; and t when all t
cout<<((9>6) || (8<9))<<endl;
cout<<((9>6) && (8<9))<<endl;


//sum of two no.
int e,f;
cout<<"enter e and f"<<endl;
cin>>e>>f;
int sum = e+f;
cout<<"sum = "<<sum<<endl;


//4 unary operator a=a+1   increment ++ decrement --
int z=10;
int x=z++;//post increment pehle kaam baadmein update
cout<<"x= "<<x<<endl;//10
cout<<"z= "<<z<<endl;//11
int y=20;

int w=++y;//pre increment pehle update fir kaam
cout<<"w= "<<w<<endl;//21
cout<<"y= "<<y<<endl;//21


return 0;
}