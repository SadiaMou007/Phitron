#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    queue<string> q;

    while(t--)
    {
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
            
            if(q.empty()) {
                cout<<"Invalid"<<endl;
            }
            else {
                cout<<q.front()<<endl;
                q.pop();
            }
            
         }
      
    }

    return 0;
}