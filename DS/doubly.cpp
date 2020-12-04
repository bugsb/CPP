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
namespace helper{
                void printError()
                {
                    cout<< "\n Not available ! \n";
                    return;
                }

                bool keyNotFound(node **iterator)
                {
                    if((*iterator)->next == nullptr)
                        return true;
                    else
                        return false;
                }
                bool isEmpty(node ** head)
                {
                    if (*(head) == nullptr)
                        return true;
                    else
                        return false;
                }

                bool  itIsLastNode(node **iterator, int key)
                {  
                    if((*iterator)->val == key and (*iterator)->next == nullptr)
                        return true;
                    else
                        return false;
                }
                bool itIsFirstNode(node **iterator, int key)
                {
                    if( (*iterator)->val == key )
                        return true;
                    else
                        return false;
                }
}
class doubly
dy{   
    public:

    node *head = nullptr;

    void pushFront(int val)
    {   using namespace helper;

        node *newNode = new node(val);

        if ( isEmpty(&head))
            head = newNode;
        
        else
        {
            newNode->next = head;
            newNode->prev = nullptr;
            head->prev = newNode;
            head = newNode;
        }
        
    }

    void pushBack(int val)
    {       
        using namespace helper;
        node * newNode = new node(val);
        if ( isEmpty(&head) ) 
            head = newNode;
            
            else
            {
                node *itr = head;

                while (itr->next != nullptr)
                    itr = itr->next;

                itr->next = newNode;
                newNode->prev = itr;
                
            }
            
    }

    void display()
    {
        node *iterator = head;
        cout << "[HEAD]";
        while(iterator != nullptr)
        {
            cout<< "-->";
            cout << iterator->val;
            iterator = iterator->next;
        }
        cout << "\n";
    }
   
    void searchAndDel(int key)
    {
        node *iterator = head;
        node *predecessor = head;
        using namespace helper;

        if( itIsFirstNode(&iterator, key )) 
        {
            head = iterator->next;
            iterator->next->prev = nullptr;
            delete iterator;
            return;
        }

        while(iterator->val != key)
        {   
             if (keyNotFound(&iterator)) 
            {
                printError();
                return;
            }
        predecessor = iterator;
        iterator = iterator->next;

        }  
        
        if ( itIsLastNode(&iterator,key))
            {
                predecessor->next = nullptr;
                delete iterator;
                return;
            }
        predecessor->next = iterator->next;
        iterator->next->prev = iterator->prev;
        delete iterator;
    }

        void reverse()
        {
            node *tail = head;
            while(tail->next != nullptr)
                tail = tail->next;

             cout << "[TAIL]";

        while(tail != nullptr)
        {
            cout<< "-->";
            cout << tail->val;
            tail = tail->prev;
        }
        cout << "\n";
        }

};

int main()
{
    doubly *list = new doubly;
    list->pushFront(5);
    list->pushFront(4);
    list->pushFront(0);
    list->pushBack(8);
    list->pushBack(9);
    list->pushFront(1);
    list->searchAndDel(5);
    list->pushBack(6);
    list->searchAndDel(6);
    list->searchAndDel(1);
    list->display();
    list->reverse();

    

}