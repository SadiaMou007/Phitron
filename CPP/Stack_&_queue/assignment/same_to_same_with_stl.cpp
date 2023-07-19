#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    
    for (int i=0; i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    
    if(n != m) cout<< "NO" <<endl;
    else {
      int f = 0;
      while (!st.empty())
      {
        if(st.top() != q.front()) 
        {
            f = 1;
            break;
        }
        st.pop();
        q.pop();
      }
      
      (f ? cout<< "NO" <<endl : cout<< "YES" <<endl);
  
    }
 
    return 0;
}