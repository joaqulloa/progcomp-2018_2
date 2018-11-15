#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
/*Se definen valores y arreglos a usar, numero de casos,
numero de calles, numero de avenidas y numero de amigos*/
  int t, r, c, f;
  int streets[50000];
  int avenues[50000];

  cin >> t;
/*Se repite el algortimo segun el numero de casos*/
  while (t--) {

    /*Se ingresan los valores correspondientes*/
    cin >> r >> c >> f;

    /*Se ingresan los valores en los arrrglos de calles
    y avenidas respectivamente*/
    for (int i = 0; i < f; i++) {
      cin >> streets[i] >> avenues[i];
    }
/*Se utiliza la función sort para ordenar los valores de los
array de manera creciente*/
    sort(streets, streets + f);
    sort(avenues, avenues + f);
/*Se crea el pair result para guardar las coordenadas de la soluciòn*/
    pair<int,int> result;

/*Como esta los arreglos estan ordenados de manera creciente se escogen
los valores medios de cada arreglo como coordenadas solucion*/
    result.first = streets[(f-1)/2];
    result.second = avenues[(f-1)/2];

/*Finalmente se imprime el resultado del caso*/
    cout << "(Street: " << result.first << ", Avenue: " << result.second << ")" << endl;
  }

  return 0;
}
