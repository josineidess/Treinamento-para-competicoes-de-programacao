#include <iostream>
#include <vector>
#include <map>

using namespace std;
 
int main() {
  map<long long int,long long int> dicionario;
  long long n,soma,atual;
  cin >> n >> soma;
  
  for(int e = 0;e < n;e++){
      cin >> atual;
      if(dicionario.count(soma-atual)){ //procura um valor que somado ao atual dê a soma
         cout << dicionario[soma-atual] << " " << e+1;
         return 0;
      }
      dicionario[atual] = e+1;
  }
  cout << "IMPOSSIBLE";
  return 0;
 
}