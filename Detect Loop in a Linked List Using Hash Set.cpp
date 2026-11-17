#include <iostream>
#include <unordered_set>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* a = new Node{1, NULL};
    Node* b = new Node{2, NULL};
    Node* c = new Node{3, NULL};
    Node* d = new Node{4, NULL};

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;

    unordered_set<Node*> s;

    Node* temp = a;

    while(temp != NULL)
    {
        if(s.find(temp) != s.end())
        {
            cout << "true";
            return 0;
        }

        s.insert(temp);
        temp = temp->next;
    }

    cout << "false";

    return 0;
}