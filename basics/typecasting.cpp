#include<iostream>
using namespace std;
int main(){
//type conversion -> implicit
char grade = 'a';//97
int value = grade;
cout<<grade<<endl;
//type casting -> explicit
//big data type to small data type
double price = 100.9;
int newprice = (int)price;
cout<<newprice<<endl;
return 0;
}