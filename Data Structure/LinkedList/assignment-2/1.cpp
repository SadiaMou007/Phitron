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
void print_list(Node *head)
{
    Node *tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->value << " ";
        tmp=tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int value;
    while (true)
    {
        cin>>value;
        if (value==-1)
            break;
        insert_tail(head,tail,value);
    }
    
    return 0;
}