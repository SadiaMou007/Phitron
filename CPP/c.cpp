#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    string s;
    cin>>s;
    queue <char> q;
    for(int i=0;i<s.size();i++)
    {
       int n=(s[i])-48;
      // cout<<n<<endl;
       if(n > 9)
       {
        q.push(s[i]);
       }
       else 
       {
          if(!q.empty())
          {
            for(int i=0; i<n;i++)
            {
                cout<<q.front()<<endl;
            }
          }
       }
       
    } 
    return 0;
}
