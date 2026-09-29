#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void printList(Node*head){
    Node*temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    int size;
    cout << "Enter size of List : ";
    cin >> size;

    Node *head = nullptr;
    Node *temp = nullptr;
    Node *newnode;
    int ele;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data for linked list : ";
        cin >> ele;
        newnode = new Node(ele);

        if(head == nullptr){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    printList(head);

    return 0;
}