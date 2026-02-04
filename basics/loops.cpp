#include<iostream>
using namespace std;
int main(){
//while loop
//int count = 1;//initialization
//int n;
//cout<<"value of n : ";
//cin>>n;
//while(count<=n){//condition
//cout<<count<<endl;
//count++;//updation
//}
//camelCase




//for loop
//for(initialisation;condition;updation{
//work}
//int n=5;
//for(int i=1; i<=n; i+=2){//i+=2 i=i+2
//cout<<i<<endl;}

//sum of numbers from 1 to n
//int n;
//int sum;
//cin>>n;
//for(int i=1;i<=n;i++){
//sum+=i;
//}
//cout<<sum;


//how to use break
int n=50;
int sum=0;

for(int i=1; i<=n; i++){
sum += i;
if(i==7){
break;// special reserved word -> keyword
}
}
cout<<sum;



//sum of all odd no.s from 1 to n






return 0;
}