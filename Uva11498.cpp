#include<iostream>

using namespace std;

void cuadrante(int i, int j, int x, int y)
{
 if (x > i and y > j)
        cout << "NE" << endl;
 else if (x < i and y > j)
        cout << "NO" << endl;
 else if (x < i and y < j)
        cout << "SO" << endl;
 else if (x > i and y < j)
        cout << "SE" << endl;
 else
        cout << "divisa" << endl;
}

int main(){
int K,N,M,k,a,b;
cin >> K;
while(K!=0){
cin >> N;cin >> M;
for(k=0;k<K;k++){
 cin >> a;cin >> b;
 cuadrante(N,M,a,b);
}
cin >> K;}
return 0;}
