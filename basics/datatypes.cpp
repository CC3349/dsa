//primitive data types
#include<iostream>
using namespace std;
int main(){
int age = 25;//4 bytes
char grade='A';//1 byte
float pi=3.14f;// 4 bytes
bool isSafe = true;//1 byte
bool Safe = false;//false->0 true->0
double price = 100.99;
cout<<age<<endl;
cout<<sizeof(age)<<endl;
cout<<grade<<endl;
cout<<pi<<endl;
cout<<isSafe<<endl;
cout<<Safe<<endl;
cout<<price<<endl;
return 0;
}