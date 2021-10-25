#include <iostream>

using namespace std;

int main(){
  long int nn,cont=0,ant,prox;
  bool igual = true;
  cin >> nn;

  long int matriz[nn];

  for(int e = 0;e < nn;e++){
    cin >> matriz[e];
  }

  for(int e = 0;e < nn-1;e++){
    if(matriz[e] > matriz[e+1]){
        cont += matriz[e] - matriz[e+1];
        matriz[e+1] += (matriz[e] - matriz[e+1]);
    }
  }

  cout << cont;

  return 0;
}
