#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next =NULL;
        this->prev =NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string val,input;
    
    while(true)
    {
        cin >> input;
        if(input == "end") break;
        else insert_tail(head,tail,input);
    }
   
    int t;
    cin>>t;
    Node *tmp = head;
    
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        int f=1;

        if(s1 == "visit")
        {
            cin>>s2;
        Node *tmp2=head;
        while(tmp2 != NULL)
        {
                if(tmp2->val == s2) 
                {
                    f=0;
                    break;
                }
                tmp2= tmp2->next;
        }
        if(f ==0) 
        {
            cout<<tmp2->val<<endl;
            tmp=tmp2;
        }
        else {
            cout<<"Not Available"<<endl;
        }
       
        }
        else if(s1 == "next")
        {
            if(tmp->next != NULL) 
            {
            cout<<tmp->next->val<<endl;
             tmp = tmp->next;
            }
            else cout<<"Not Available"<<endl;
           
            
        }
        else if(s1 == "prev")
        {
             if(tmp->prev != NULL) 
            {
             cout<<tmp->prev->val<<endl;
             tmp = tmp->prev;
            }
            else cout<<"Not Available"<<endl;
        }
              
    }
   
    return 0;
}