#include<iostream>
#include<algorithm>

using namespace std;

int main(){
int n,i,sum=0;
cin >> n;
int w[n];
for(i=0;i<n;i++){
    cin >> w[i];
}
sort(w, w+n);
if (n%2==0){
 for(i=0;i<(n/2+1);i++){
     if ( w[i] % 2 == 0)
        sum=sum+w[i]/2+1;
    else
        sum=sum+(w[i]+1)/2;
 }}
else{
  for(i=0;i<(n+1)/2;i++){
     if ( w[i] % 2 == 0)
        sum=sum+w[i]/2+1;
    else
        sum=sum+(w[i]+1)/2;
 }}
 cout << sum << endl;
return 0;}
