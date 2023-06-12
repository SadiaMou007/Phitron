#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
     string name;
     int age;
};

int main() {
   
    Student a[3];
    for(int i=0; i<3; i++)
    {
       // getline(cin, a[i].name);
        cin>>a[i].age;
       // cin.ignore();
    }
    
   Student mx;
    mx.age=INT_MIN;
    
     for(int i=0; i<3; i++)
    {
      if(a[i].age > mx.age) mx.age = a[i].age;
    }
    cout<<mx.age;
    return 0;
}



