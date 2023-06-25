#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode=new Node(value);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void  check_list(Node *head1,Node *head2)
{
    Node *tmp1=head1;
    Node *tmp2=head2;
    int f=0;
    while(true)
    {
       if(tmp1==NULL && tmp2 == NULL)
        {
            break;
        }
        else if(tmp1 == NULL || tmp2==NULL)
        {
            f=1;
            break;
        }
       if((tmp1->value != tmp2->value))
        {
          f=1;
          break;  
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
     }
   
    if(f==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    Node *head1=NULL;
    Node *tail1=NULL;
    Node *head2=NULL;
    Node *tail2=NULL;
    int value;
    
    while (true)
    {
        cin>>value;
        if (value==-1)
            break;
        insert_tail(head1,tail1,value);
    }
    
    while (true)
    {
        cin>>value;
        if (value==-1)
            break;
        insert_tail(head2,tail2,value);
    }
  
    
    check_list(head1,head2);
   
    return 0;
}


