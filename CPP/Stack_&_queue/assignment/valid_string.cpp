#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        queue<string> q;
        int isOut;
        cin>> isOut;
        
        if(isOut==0) 
        {
              string s;
             cin >> s;
             q.push(s);
        }
        else if(isOut==1)
        {
            cout<<q.front()<<endl;
            if(!q.empty()) q.pop();
            
        }
        //  while(!q.empty())
        // {
        //     cout<<(q.front())<<" ";
        //     q.pop();
        // }
       
    }

    return 0;
}