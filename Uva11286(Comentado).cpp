#include <cstdio>
#include <map>
#include <set>
#include <algorithm>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

int main() {
	int n;

	while (cin >> n, n) {
		map<string, int> log;

		int maxN = -1;
		string x[5];

		for (int i = 0; i < n; i++) {

            /*Cada alumno toma 5 cursos y se ordenan de
            mayor a menor */
			cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];
			sort(x, x + 5);

			/*Se suman los valores de cada curso y se le
			nombre code*/
            string code;
			for (int j = 0; j < 5; j++) {
				code += x[j];
			}

            /*Se verifica si code esta en el mapa, en el
            caso que no este se ingresa con valor 1 en la
            popularidad*/
			if (!log.count(code)) {
				log[code] = 1;
				maxN = max(maxN, 1); //Se escoge la maxima popularidad
			}
			/*En el caso que este se suma uno a la popularidad*/
			else {
				int m = log[code] + 1;
				log[code] = m;
				maxN = max(maxN, m); //Se escoge la maxima popularidad
			}
		}
        /*Se analiza el mapa y se imprime la popularidad mas alta*/
		int count = 0;
		map<string, int>::iterator it;
		for (it = log.begin(); it != log.end(); it++) {
			if (it->second == maxN)
				count += it->second;
		}

		printf("%d\n", count);
	}

	return 0;
}
