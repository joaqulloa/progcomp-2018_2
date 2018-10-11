#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main() {
	int cases; cin >> cases;
	/*Se inicia el analisis de cada caso y
	se repite segun el numero de cases ingresado*/
	for (int C, R, c = 1; cases--; ++c) {

		/*Se ingresa el numero de galletas cocinadas
		y las restantes para calcular las que fueron repartidas*/
		cin >> C >> R;
		set<int> res; //Set nos servira para ordenar los Q de mayor a menor
		int diff = C - R;

		cout << "Case #" << c << ":";

		/*Si C-R=0 entonces no hubieron galletas repartidas*/
		if (diff == 0) {
			cout << " 0" << endl;
			continue;
		}

		/*Cada vez que se encuentre un divisor de diff se inserta
		en el set hasta que Q<=R*/
		for (int i = 1; i * i <= diff; ++i)
			if (diff % i == 0) {
				res.insert(diff / i);
				res.insert(i);
			}
		/*Finalmente se inicia un iterador para imprimir los Q en res*/
		for (set<int>::iterator it = res.begin(); it != res.end(); it++)
			if (*it > R) cout << " " << *it;
		cout << endl;
	}
	return 0;
}
