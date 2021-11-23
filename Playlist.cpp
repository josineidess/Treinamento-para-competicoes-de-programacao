
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n,atual, ant,x=0,y=0,seq=0;
    vector <int> v;
    cin >> n;
    set <int> v2;
    
    for(int e = 0;e < n;e++){
        cin >> atual;
        v.push_back(atual);
    }
    while(x < n && y < n){
       while(y < n && !v2.count(v[y])){
         v2.insert(v[y]);
         seq = max(seq,y-x+1);
         y++;
       }    
       while(y < n && v2.count(v[y])){
           v2.erase(v[x]);
           x++;
       }
    }
    
    cout << seq << "\n";
    
    return 0;
}
