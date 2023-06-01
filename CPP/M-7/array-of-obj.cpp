#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
     string name;
     int age;
};

int main() {
   
    Student a[2];
    for(int i=0; i<2; i++)
    {
        getline(cin, a[i].name);
        cin>>a[i].age;
        cin.ignore();
    }
     for(int i=0; i<2; i++)
    {
      cout<<a[i].name <<" "<<a[i].age<<endl;
    }

    return 0;
}