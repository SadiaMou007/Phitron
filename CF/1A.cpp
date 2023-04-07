#include <iostream>
using namespace std;
int main()
{
    long long int a,b,c,r;
    cin>>a>>b>>c;
    if(a%c == 0) r=a/c;
    else r=a/c +1;
    r=a%c ==0 ? a/c :a/c +1;
    r *= b%c ==0 ?b/c :b/c +1;
    cout<<r<<endl;
}