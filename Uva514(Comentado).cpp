#include<cstdio>
#include<stack>

using namespace std;

int N, c;
stack<int> cars;

void marshal() {
    for(;;) {
        /*Se vacia el stack de vagones para el nuevo caso*/
        while(cars.size() > 0) cars.pop();
        int j = 0;


        for(int i = 0; i < N; i++) {

            /*Se ingresa el numero del vagon corresondiente*/
            scanf("%d", &c);

            /*En caso de 0 se rompe el loop y para escanear
             nuevos trenes de N vagones*/
            if(c == 0) return;

            /*Se ingresan los vagones al stack segun el orden dado
            hasta llenar la capacidad N*/
            while(j < N && j != c) {
                if(cars.size() > 0 && cars.top() == c) break;
                j++;
                cars.push(j);
            }
            /*Si el numero del vagon ingresado es igual al del tope
            del stack, se elimina de este*/
            if(cars.top() == c) cars.pop();
        }
        /*Si es que no quedo ningun elemento en el stack, se cumplio
        correctamente un orden ascendente o descendente*/
        if(cars.size() == 0) printf("Yes\n");
        else printf("No\n");
    }
}

int main() {
    for(;;) {
        /*El ciclo se repite hasta que se ingrese un tren de
        0 vagones*/
        scanf("%d", &N);
        if(N == 0) break;
        marshal();
        printf("\n");
    }
}
