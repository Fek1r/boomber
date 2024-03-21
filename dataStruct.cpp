#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this-> next = nullptr;
    }
};

class LinkedList
{
    public:
    Node* head;

    LinkedList()
    {
        this ->head = nullptr;
    }

    void append(int data)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            head = newNode;
            return;
        }
        Node* current = head;
        while(current->next != nullptr)
        {
            current = current -> next;

        }
        current -> next = newNode;
    }
    void display()
    {
        Node* current = head;
        while(current->next != nullptr)
        {
            cout << current->data <<endl;
            current = current->next;
           
        }
        cout << current->data <<endl;
    }
};

int main(){
    LinkedList list;
    list.append(3);
    list.append(5);
    list.append(6);
    list.display();
    
    return 0;
}