#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
int n,c,b[3010],a[3010],i;
/*Se repite el algoritmo hasta que ya no haya numeros que ingresar*/
while(scanf("%d",&n)==1)
{
/*Se inicia c con valor uno que indica que la secuencia es jolly*/
c=1;
/*Se guardan los n valores de la secuencia en el arreglo a*/
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
/*Se guardan las diferencias entre valores adyacentes en el arreglo b*/
for(i=0;i<n-1;i++){
b[i]=abs(a[i+1]-a[i]);
}
/*Se utiliza la funcion sort para ordenar los valores del arreglo de manera creciente*/
sort(b,b+i);

/*Se es que se repite algun valor dentro del arreglo b, entonces c toma el valor 0 y ya
no es una secuencia Jolly*/
for(i=1;i<n;i++){
if(b[i]==b[i-1])
{
c=0;
break;
}
}
if(c==0)
printf("Not jolly\n");
/*Si es que todos los valores son distintos, entonces la secuencia es Jolly*/
else
printf("Jolly\n");
}
return 0;
}
