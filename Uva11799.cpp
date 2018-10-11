#include<iostream>
#include<algorithm>

using namespace std;

int main(){
int T,t,N,n,c[1000],ans=1;
cin >> T;
for(t=1;t<=T;t++){
  cin >> N;
 for(n=0;n<N;n++){
    cin >> c[n];
    ans=max(ans,c[n]);}
cout << "Case " << t << ": " << ans << endl;
ans=1;}
return 0;}
