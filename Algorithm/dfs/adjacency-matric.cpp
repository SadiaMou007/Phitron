#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

const int N = 1e3+5; //1000 * 1000
int adjmat[N][N];

int main() {
    int n,m;
    cin >> n>> m;

    for(int i =0; i<m; i++)
    {
        int u,v; //weighted graph - take input u,v w 
        cin >> u >> v;
        adjmat[u][v]=1; //directed //weighted graph -  adjmat[u][v]=w;
       // adjmat[v][u]=1; //un-directed
    }
    for(int i=1; i<= n; i++)
    {
        for(int j=1; j<= n; j++) cout<< adjmat[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
