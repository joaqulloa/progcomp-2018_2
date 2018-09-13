#include<iostream>

using namespace std;

int main (){
int n,i,sum=0,b;
 cin >> n;
 if(n<=1){
 for(i=1;i>=n;i--){
    sum=sum+i;
 }}
 else
 for(i=1;i<=n;i++){
    sum=sum+i;
 }
 cout << sum;
return 0;}
