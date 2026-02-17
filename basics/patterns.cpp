#include<iostream>
using namespace std;

int main(){

//square pattern
//outer loop n times run krta hai
// if n=4 outer loop 4 times run krenga aur 4 columns bnaga
// 1 time run krega tooh 1st line pr honge ... 2nd time run krne pr 2nd line main honge ... and so onnnnn
// inner loop ... row main kyaa output krana hai woh btata ha
// inner loop main 1 to n tak no.s print krata hai

//int n=4;
//for(int i=1;i<=n;i++){//if i=0 then run till n-1; if i=1 then run till n
//for(int j=1;j<=n;j++){
//cout<<j;}
//cout<<endl;}

//1234
//1234
//1234
//1234


//for characters
//int n=4;
//for(int i=0;i<n;i++){
//char ch='A';//loop ke andar yeh line isliye daali kyunki har next line a se hi start ho rhi hai
//for(int j=0;j<n;j++){// inner start->line start //a ke baad character change ho rhe hain toh hr next line a se hi shuru ho isliye loop ke andar woh linee daali
//cout<<ch<<" ";
//ch++;
//}
//cout<<endl;
//}
//A B C D
//A B C D
//A B C D
//A B C D

//int n=3;
//int b=1;
//for(int i=0;i<n;i++){
//for(int j=0;j<n;j++){
//cout<<b<<" ";
//b++;
//}
//cout<<endl;
//}
//1 2 3
//4 5 6
//7 8 9

//int n=3;
//char b='A';
//for(int i=0;i<n;i++){
//for(int j=0;j<n;j++){
//cout<<b<<" ";
//b++;
//}
//cout<<endl;
//}
//A B C
//D E F
//G H I


//simple pyramid
//int n=4;
//for(int i=0;i<n;i++){
//for(int j=0;j<=i;j++){
//cout<<"*";
//}
//cout<<endl;
//}
//*
//**
//***
//****


//int n=5;
//int count=1;
//for(int i=0;i<n;i++){
//for(int j=0;j<=i;j++){
//cout<<count;
//}
//count++;
//cout<<endl;}
//1
//22
//333
//4444
//55555


//int n=5;
//int count=1;
//for(int i=0;i<n;i++){
//for(int j=1;j<i+1;j++){
//cout<<j;
//}
//cout<<endl;
//}
//1
//12
//123
//1234

//reverse triangle pattern
int n=5;
int count=1;
for(int i=0;i<n;i++){
for(int j=i+1;j>0;j--){
cout<<j;
}
cout<<endl;
}

return 0;
}