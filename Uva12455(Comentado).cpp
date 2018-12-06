#include <stdio.h>

int main() {
    int t, w, n, i, j, p;
    /*Se escanea al numero de casos para el cual se debe
    repetir el algoritmo*/
    scanf("%d", &t);
    while(t--) {
        /*Se escanea el largo de la barra final y la cantidad de barras
        disponibles*/
        scanf("%d %d", &w, &n);
        /*Se crea un array vacio y se le asigna el valor 1 al elemento inicial*/
        int dp[1005] = {};
        dp[0] = 1;
        for(i = 0; i < n; i++) {
            /*Se ingresa el largo de la barra*/
            scanf("%d", &p);
        /*El array expresa el largo que tendria la barra al mezclar los distintos
        subgrupos de barras que se pueden formar, representado como un 1 en el elemento
        m, que se traduce a una barra de largo m*/
            for(j = w-p; j >= 0; j--) {
                if(dp[j] && !dp[j+p])
                    dp[j+p] = 1;
            }
        }
        /*Si es que gracias a algun subconjunto el elemento w del array toma el valor 1,
        entonces si se puede armar la barra final*/
        if(dp[w])
            puts("YES");
        /*En caso contrario, no se puede*/
        else
            puts("NO");
    }
    return 0;
}
