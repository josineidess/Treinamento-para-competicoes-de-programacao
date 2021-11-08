#include <iostream>
#define TAM 1000000000

using namespace std;

int main() {
  long long int n;
  long long int soma=0, maior=0;
  long long int vetor[1000000];

  cin >> n;

  for(int cont = 0;cont < n;cont++){
    cin >> vetor[cont];
  }

  if(vetor[0] < 0){
    soma = vetor[0];
    maior = soma;
  }

 for (int cont = 0; cont < n; cont++) {
     if(vetor[cont] >= soma+vetor[cont]){
        soma = vetor[cont];
     }else{
         soma = soma+vetor[cont];
     }
     if(soma > maior){
         maior = soma;
     }
  }

  cout << maior << "\n";

  return 0;

}
