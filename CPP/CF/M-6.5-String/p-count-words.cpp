#include <bits/stdc++.h>
using namespace std;

int main() {
  
   string s;
   getline(cin,s);
   
   bool f=false;
   int count=0;
   
   for(char c: s)
   {
       if(isalpha(c)>0) {
           if(!f) count++;
           f=true;
       }
       else f=false;
   }
   cout<<count<<endl;

    return 0;
}