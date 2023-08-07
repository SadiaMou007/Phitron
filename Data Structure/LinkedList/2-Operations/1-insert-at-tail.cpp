#include <iostream>
using namespace std;
class Node{
    public:
       int value;
       Node * next;
    Node (int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

void insert_at_tail(Node *&head,int value)
{
    Node * newNode = new Node(value);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node * tmp = head;
    while(tmp->next != NULL)
    {
       tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_linked_list(Node * head)
{
  Node * tmp = head;
  while(tmp != NULL)
  {
    cout<<tmp->value<<" ";
    tmp = tmp->next;
  }
  cout<<endl;
}

int main() {
    Node *head =NULL;
    while(true)
    {   
       
        cout<<"1: Add node:"<<endl;
        cout<<"2: Show list"<<endl;
        cout<<"3: Terminate"<<endl;

        int n;
        cin>>n;
       
        if(n==1){
          int value;
          cin>>value;
          insert_at_tail(head,value);          
        }
        else if(n==2)
        {
            print_linked_list(head);
        }    
        else if(n==3) break; 
      
    }
   
    return 0;
}