#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> myList;
    string s,word;
    getline(cin,s);
    stringstream ss(s);
   while(ss >> word) myList.push_back(word);
   
  
   int t;
   cin>>t;
   while(t--)
   {
       string s, s1;
       cin>> s;
       auto it = find(myList.begin(), myList.end(), s);

       if(s=="visit") 
       {
            cin >> s1;
             it = find(myList.begin(), myList.end(), s1);
            if (it == myList.end()) cout << "Not Available";
            else cout<<*it<<endl;
       }
        // else  
        // {
            
        //       it = find(myList.begin(), myList.end(), s);
             
        //       if(s=="next") {
        //           *it = next(it,1);
        //           cout<<*it<<endl;
        //       }
        //       else {
        //           *it = next(it,-1);
        //           cout<<*it<<endl;
        //       }
            
              
        //  }
       
   }
      
    //for(string val : myList) cout<< val << " ";
    return 0;
}