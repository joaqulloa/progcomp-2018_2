#include <cstdio>
#include <algorithm>
using namespace std;

/*Función para encontar un valor dentro
de un array y devolver su posición*/
int find(int p, int arr[]) {
	int i;
	for (i = 0; i < 8; i++) {
		if (arr[i] == p)
			break;
	}
	return i;
}

int main() {
	int n, m;
	int constraints[20][3];
/*Se inicia el caso escaneado el tamaño del grupo y el
numero de restricciones*/
	while (scanf("%d %d", &n, &m), n || m) {
		for (int i = 0; i < m; i++) {
        /*Se escanea los valores a, b y c correspondientes a cada
        restriccion*/
			scanf("%d %d %d", &constraints[i][0], &constraints[i][1],
					&constraints[i][2]);
		}
/*Array para almacenar un grupo de tamaño maximo 8*/
		int arr[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
/*Contado de combinaciones posibles*/
		int ans = 0;
		do {
			bool sat = true;
			for (int i = 0; i < m; i++) {
            /*Busca valores a y b en el array y devolver su posición*/
				int pos1 = find(constraints[i][0], arr);
				int pos2 = find(constraints[i][1], arr);
            /*Si c es positivo entonces a y b se sientan a lo mas a c asientos de
            distancia*/
				if (constraints[i][2] > 0) {
                /*Si no cumple la restriccion entonces se descarta esta combinacion*/
					if (abs(pos1 - pos2) > constraints[i][2]) {
						sat = false;
						break;
					}
				}
            /*Si c es negativo entonces a y b se sientan al menos a -c asientos de
            distancia*/
				if (constraints[i][2] < 0) {
                /*Si no cumple la restriccion entonces se descarta esta combinación*/
					if (abs(pos1 - pos2) < (-constraints[i][2])) {
						sat = false;
						break;
					}
				}
			}
        /*Si la combinacion no fue descartada, se agrega una solucion al contador*/
			if (sat)
				ans++;
/*Se repite el bucle hasta que no haya posibles permutaciones*/
		} while (next_permutation(arr, arr + n));
/*Se entrega el numero de permutaciones validas posibles*/
		printf("%d\n", ans);
	}

	return 0;
}
