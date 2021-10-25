#include <iostream>

using namespace std;

int main(){
  long int n,atual,somaN=0,somaR=0;
  cin >> n;

  for(int e = 1;e <= n;e++){
    somaN += e;
  }

  for(int e = 0;e < n-1;e++){
    cin >> atual;
    somaR += atual;
  }

  cout << somaN - somaR;

  return 0;
}
