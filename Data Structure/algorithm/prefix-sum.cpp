/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b;
    cin>>a>>b;
    
    vector <long long int> v(a);
    vector <long long int> pre(a);
    
    long long int sum=0;
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
        sum += v[i];
        pre[i]=sum;
    }
  
    while(b--)
    {
        int n,m;
        cin>>n>>m;
        if(n == 1) cout<<pre[m-1]<<endl;
        else cout<<pre[m-1] - pre[n-2]<<endl;
    }
    
    return 0;
}