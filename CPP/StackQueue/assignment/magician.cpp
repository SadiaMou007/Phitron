#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        stack<char> st;
        stack<char> newSt;
        int n;
        cin >>n;
        string s;
        cin >> s;
        for(int i=0 ;i<n; i++)
        {
            //r b - p, r g - y, b g - c
           // cout<<s[i]<<endl;
            if(st.empty()) st.push(s[i]);
            else if(( st.top() == 'R' && s[i] == 'B') || st.top() == 'B' && s[i] == 'R' )
            {
                st.pop();
                if(!st.empty() && (st.top() == 'P')) st.pop();
                else st.push('P');
            }
            else if(( st.top() == 'R' && s[i] == 'G') || st.top() == 'G' && s[i] == 'R' )
            {
                st.pop();
                if(!st.empty() &&(st.top() == 'Y')) st.pop();
                else st.push('Y');
            }
            else if(( st.top() == 'G' && s[i] == 'B') || st.top() == 'B' && s[i] == 'G' )
            {
                st.pop();
                if(!st.empty() &&(st.top() == 'C')) st.pop();
                else st.push('C');
            }
            else if(!st.empty() && (st.top() == s[i])) st.pop();
            else st.push(s[i]);
        }
        while(!st.empty())
        {
            newSt.push(st.top());
            st.pop();
        }
        while(!newSt.empty())
        {
            cout<<newSt.top();
            newSt.pop();
        }
        cout<<endl;
    }

    return 0;
}