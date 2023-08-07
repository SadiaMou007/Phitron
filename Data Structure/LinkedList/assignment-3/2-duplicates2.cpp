#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int n;
    while(true)
    {
        cin >> n;
        if(n == -1) break;
        myList.push_back(n);
    }
    myList.sort();
    myList.unique();
    for(int val : myList) cout<< val << " ";
    return 0;
}