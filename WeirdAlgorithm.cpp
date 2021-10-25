#include <iostream>
#define TAM 1000000

using namespace std;

int main() {
  long int nn;
  long int numeros[TAM],cont=0;

  cin >> nn;
  numeros[0] = nn;
  cont ++;

  while(nn != 1){
    if(nn % 2 == 0){
      numeros[cont] = nn / 2;
      nn = nn /2;
    }else{
      numeros[cont] = (3*nn)+1;
      nn = (3*nn)+1;
    }
    cont ++;
  }

  for(int e =0;e < cont;e++){
    cout << numeros[e];
    if(e != cont-1){
        cout << " ";
    }
  }

  return 0;

}
