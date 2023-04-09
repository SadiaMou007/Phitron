#include <iostream>
using namespace std;
int main()
{
    int a,b,c,s,l;
    cin>>a>>b>>c;
    s =  a<b ? a<c ? a:c : b<c ? b : c;
    l =  a>b ? a>c ? a:c : b>c ? b : c;
   cout<<s<<" "<<l<<endl;
}