
#include <stdio.h>
int main()
{
    int t,n,j,c,i;
    char a[110];

    /*Se escanea el numero de casos hasta que el algoritmo no
    encuentre ningun valor para ingresar*/
    while(scanf("%d",&t)==1)
    {
    /*Se aplica el algoritmo segun el numero de casos dado*/
    for(j=1;j<=t;j++)
    {
    /*Se escanea la primera linea del caso el cual indica el numero
    de caracteres en la siguiente linea*/
    /*Se escanea la siguiente cadena de caracteres y se guarada en
    el string a*/
        scanf("%d %s",&n,a);
    /*Se le asigna un valor inicial de 0 espantapajaros al caso*/
        c = 0;
    /*Se analiza cada caracter del string*/
        for(i=0;i<n;)
        {
    /*Si se encuentra una region infertil entonces se sigue el ciclo*/
            if(a[i] == '#')
            i++;
    /*Si se encuentra una region fertil entonces se suma una espantapanjaros
    al contador y saltamos al caracer i+3*/
            else
            {
            c++;
            i += 3;
            }
        }
    /*Finalmente se imprimen los espantapajaros necesarios para cubrir
    el cultivo*/
        printf("Case %d: %dn",j,c);

    }
    break;
    }

    return 0;
}
