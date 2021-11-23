
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n,m, atual;
    vector <int> t;
    vector <int> c;
    set <pair<int,int>> srt;
    
    cin >> n >> m;
    for(int e = 0;e < n;e++){
        cin >> atual;
        t.push_back(atual);
        srt.insert({t[e],e});
    }
    
    for(int e = 0;e < m;e++){
        cin >> atual;
        c.push_back(atual);
    }
    
    for(int e = 0;e < m;e++){
        auto ini = srt.lower_bound({c[e]+1,0});
        if(ini == srt.begin()){
            cout << -1 << "\n";
        }else{
            ini--;
            cout << (*ini).first << "\n";
            srt.erase(ini);
        }
    }
    
    return 0;
}
