#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;

    if (head == NULL)
    {
        tail=newNode;
    }
    head=newNode;
}

void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next =newNode;
    tail = newNode;
}

void print_list(Node *head, Node *tail)
{
    Node *tmp = head;
    if (tail==NULL)
    {
        cout<<tmp->value<<" "<<tmp->value <<endl;
    }
    else
    {
        cout<<tmp->value <<" "<< tail->value<<endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    int p,v;

    while (t--)
    {
        cin >>p>>v;
        if (p == 0)
        {
            insert_head(head,tail,v);
            print_list(head,tail);
        }
         else if (p == 1)
         {
            insert_tail(head,tail,v);
            print_list(head,tail);
         }
    }

    return 0;
}
