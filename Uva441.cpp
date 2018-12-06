#include<iostream>
#include<stdio.h>
#include<set>

using namespace std;

int main(){
int S[12];
int a,b,c,d,e,f,n=1,flag=0;
while(n!=0){
cin >> n;
if(n==0){break;}
if(flag==1){cout<<endl;}
for(int i=0;i<n;i++){
    cin >> S[i];
}
for(a=0;a<n-5;a++){
    for(b=a+1;b<n-4;b++){
        for(c=b+1;c<n-3;c++){
            for(d=c+1;d<n-2;d++){
                for(e=d+1;e<n-1;e++){
                    for(f=e+1;f<n;f++){
                        cout << S[a] << " " << S[b] << " " << S[c] << " " << S[d] << " " << S[e] << " " << S[f] << endl;

}}}}}}
flag=1;}

return 0;}
