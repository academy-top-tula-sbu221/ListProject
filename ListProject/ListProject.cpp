#include <iostream>

using namespace std;

struct DArray
{
    int* array;
    int size;
};


struct Node
{
    int value;
    Node* next;
};

void Push(Node*& head, int value);
int Pop(Node*& head);

void List(Node* head);

int main()
{
    Node* head = nullptr;
    Push(head, 100);
    Push(head, 200);
    Push(head, 300);

    List(head);
}



void Push(Node*& head, int value)
{
    Node* nodeNew = new Node;
    nodeNew->value = value;
    nodeNew->next = head;
    head = nodeNew;
}

int Pop(Node*& head)
{
    Node* nodeDel = head;
    int value = head->value;
    head = head->next;
    delete nodeDel;

    return value;
}


void List(Node* head)
{
    while (head)
    {
        cout << head->value << "\n";
        head = head->next;
    }
}