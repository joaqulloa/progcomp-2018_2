#include <stdio.h>
#include <string.h>

char a[105], b[105], buf[105];
char stk[105], w[105];
int len, stkIdx;

/*La función dfs permite calcular*/
void dfs(int idx, int i, int o) {
    if(i == len && o == len) {
        for(int j = 0; j < idx; j++) {
            if(j)   putchar(' ');
            putchar(w[j]);
        }
        puts("");
        return ;
    }
    if(i < len) {
        stk[stkIdx++] = a[i];
        w[idx] = 'i';
        dfs(idx+1, i+1, o);
        stkIdx--;
    }
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
        len = strlen(a), stkIdx = 0;
        if(strlen(a) == strlen(b))
            dfs(0,0,0);
        puts("]");
    }
    return 0;
}
