#include <stdio.h>
#include <string.h>

char a[105], b[105], buf[105];
char stk[105], w[105];
int len, stkIdx;

/*La función dfs permite calcular*/
void dfs(int idx, int i, int o) {
/*Cuando 'i' y 'o' sean iguales a la longitud de a, entonces se imprime
el string solucion w*/
    if(i == len && o == len) {
        for(int j = 0; j < idx; j++) {
            if(j)   putchar(' ');
            putchar(w[j]);
        }
        puts("");
        return ;
    }
/*Si la cantidad de elementos ingresados al string stk es menor
a la cantidad de elementos en el string a, se continue ingresando
'i' en el string w y elementos del string a al string stk*/
    if(i < len) {
        stk[stkIdx++] = a[i];
        w[idx] = 'i';
        dfs(idx+1, i+1, o);
        stkIdx--;
    }
/*Si es que el ultimo elemento ingresado al arreglo stk es igual al
proximo elemento que sigue en el anagrama, entonces se ingresa una 'o'
en el string w*/
    if(i > o) {
        if(stk[stkIdx-1] == b[o]) {
            w[idx] = 'o';
            stkIdx--;
            dfs(idx+1, i, o+1);
            stkIdx++;
            stk[stkIdx-1] = b[o];
        }
    }
}


int main() {

/*Para cada ciclo se ingresa la palabra a y su anagrama b correspondiente*/
    while(gets(a)) {
        gets(b);
/*En el caso de que las longitudes a y b sean iguales, se llama la funcion dfs
y se imprime las soluciones correspondientes*/
        puts("[");
/*Se inicia el ciclo con len igual al largo de a y stkIdx con valor 0*/
        len = strlen(a), stkIdx = 0;
        if(strlen(a) == strlen(b))
            dfs(0,0,0);
        puts("]");
    }
    return 0;
}
