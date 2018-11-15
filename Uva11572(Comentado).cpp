#include <cstdio>
#include <unordered_set>
#include <vector>

using namespace std;

/*Para este ejercicio se usa un set para almacenar los
copos de nieve unicos y un vector como auxiliar*/
unordered_set<int> in;
int N, T;
vector<int> a;

int main(){
/*Se ingresa el numero de casos a analizar*/
	scanf("%d", &T);

/*El algoritmo se repite segun el numero de casos*/
	while (T--){

/*Las constantes, sets y vectores se vacian una vez analizado el caso*/
		int i, j, ans = 0;
		in.clear();
		a.clear();

/*Se ingresa el numero de copos de nieve en el caso*/
		scanf("%d", &N);

/*Cada copo de nieve se ingresa al vector a*/
		for (i = 0; i < N; i++){
			scanf("%d", &j);
			a.push_back(j);
		}


		for (i = j = 0; j < N; j++){
/*Si el valor ya se encuentra en el set, se elimnaran
los valores del set desde la posicion inicial hasta la posicion
del numero repetido*/
			if (in.find(a[j]) != in.end()){
				for (; a[i] != a[j]; i++)
					in.erase(a[i]);
				i++;
			}
/*Se inserta el elemento del arreglo a al set in*/
			in.insert(a[j]);
/*Se evalua si el numero actual de elementos no repetidos en el set
es el maximo hasta ahora*/
			ans = max(ans, j - i + 1);
		}
/*Finalmente se imprime el resultado*/
		printf("%d\n", ans);
	}
}
