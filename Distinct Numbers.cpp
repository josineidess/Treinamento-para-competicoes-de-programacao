
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    long long int n, naoRepete=0;
    cin >> n;
    vector <long long int> vetor(n);
    for(int e = 0;e < n;e ++){
        cin >> vetor[e];
    }
    
    sort(vetor.begin(),vetor.end());
    
    for(int e = 0;e < n;e ++){
        if(vetor[e] != vetor[e+1]){
            naoRepete += 1;
        }
    }
    
    cout << naoRepete;
    
    return 0;
}