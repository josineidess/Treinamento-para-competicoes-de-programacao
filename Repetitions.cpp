#include <iostream>
#include <string.h>

#define TAM 1000000

using namespace std;

int main() {
  char sequencia[TAM],ant;
  long int maiorAtual,maiorAntes;
  long long int qTotal;

  cin >> sequencia;

  qTotal = strlen(sequencia);
  ant = sequencia[0];
  maiorAntes=0;
  maiorAtual = 1;

  for(int e = 1;e < qTotal;e++){
    if(sequencia[e] == ant){
        maiorAtual++;
    }else{
       maiorAntes = max(maiorAtual,maiorAntes);
       maiorAtual = 1;
    }
    ant = sequencia[e];
  }

  cout << max(maiorAntes,maiorAtual);

  return 0;

}
