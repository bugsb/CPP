#include <iostream>

using namespace std;

class node
{   
    public:
    int val;
    node *next;
    node *prev;

    node(int val)
    {
        this->next = nullptr;
        this->prev = nullptr;
        this->val = val;
    }
};

class doubly
{
    public:

    node *head = nullptr;

    void insetAtBegining(int val)
    {
        if ( head == nullptr)
        {
            node *newNode = new node(val);
            newNode->next=head;
            newNode->prev=head;
            head = newNode;
        }
        else
        {
            node *newNode = new node(val);
            newNode->next = head;
            newNode->prev = nullptr;
            head = newNode;
        }
        
    }

    void display()
    {
        node *iterator = head;
        cout << "[HEAD]";
        while(iterator != nullptr)
        {
            cout<< "->";
            cout << iterator->val;
            iterator = iterator->next;
        }
    }


};

int main()
{
    doubly list;
    list.insetAtBegining(5);
    list.insetAtBegining(4);
    list.insetAtBegining(0);
    list.display();
    

}