#include <iostream>
#define TAM 100000
#include <vector>

const int m = 1e9 + 7;

using namespace std;

int main()
{
  long long int n, x;
  cin >> n >> x;
  vector<int> moedas(n);
  vector<long long> combinacoes(x + 1, 0);

  for (int e = 0; e < n; e++)
  {
    cin >> moedas[e];
  }
  combinacoes[0] = 1;
  for (int e = 1; e <= x; e++)
  {
    for (int i = 0; i < n; i++)
    {
      if (e - moedas[i] >= 0)
      {
        combinacoes[e] = (combinacoes[e] + combinacoes[e - moedas[i]]) % m;
      }
    }
  }

  cout << combinacoes[x];

  return 0;
}