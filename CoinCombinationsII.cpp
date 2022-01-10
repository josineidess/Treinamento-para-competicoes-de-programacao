#include <iostream>
#include <vector>

using namespace std;

const int m = 1e9 + 7;

int main()
{
  int n, x, atual, cont;
  cin >> n >> x;

  int moedas[n];
  vector<long long int> combinacoes(x + 1, 0);

  for (int e = 0; e < n; e++)
  {
    cin >> atual;
    moedas[e] = atual;
  }

  combinacoes[0] = 1;
  for (int e = 0; e < n; e++)
  {
    for (int i = 0; i <= x; i++)
    {
      if (i - moedas[e] >= 0)
      {
        combinacoes[i] = (combinacoes[i] + combinacoes[i - moedas[e]]) % m;
      }
    }
  }

  cout << combinacoes[x];

  return 0;
}