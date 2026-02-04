#include<iostream>
using namespace std;

int main(){
int n;
bool prime = true;

cout<<"enter no. to check whether prime or not"<<endl;
cin>>n;

if(n==0 || n==1){
prime = false;
}

for(int i=2; i<=n/2; i++){
if (n%i==0){
prime= false;
}
}

if(prime){
cout<<"yesss prime";}
else
cout<<"not prime";

return 0;
}