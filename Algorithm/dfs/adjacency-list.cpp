#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

const int N = 1e5+5; //100000 * 100000
vector<int> adj[N];

int main() {
    int n,m;
    cin >> n>> m;

    for(int i =0; i<m; i++)
    {
        int u,v; 
        cin >> u >> v;
       adj[u].push_back(v); //directed 
       // adj[v].push_back(u);  //un-directed
    }
    for(int i=1; i<= n; i++)
    {
        cout<<"List"<<i<<": ";
        for(int j: adj[i]) cout<< j<<" ";
        cout<<endl;
    }
    
    return 0;
}
