#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

const int N = 1e5+5; //100000 * 100000
vector<pair<int, int>> adj[N];

int main() {
    int n,m;
    cin >> n>> m;

    for(int i =0; i<m; i++)
    {
        int u,v,w; 
        cin >> u >> v >>w;
       adj[u].push_back({v,w}); //directed 
       // adj[v].push_back({u,w});  //un-directed
    }
    for(int i=1; i<= n; i++)
    {
        cout<<"List"<<i<<": ";
        for(auto j: adj[i]) cout<< "("<< j.first<<","<<j.second<<"), ";
        cout<<endl;
    }
    
    return 0;
}
