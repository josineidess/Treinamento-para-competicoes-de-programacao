#include <iostream>
using namespace std;
 
int main() {
  long long int n, soma=0, primo = 5;
  cin >> n;
  
  while(primo <= n){
      soma += (n/primo); //(100/5) + (100/25) + (100/125) = 20 + 4 + 0 = 24
      primo *= 5; //Aumenta o grau do 5
  }
  
  cout << soma;
 
  return 0;
 
}