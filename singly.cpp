#include <iostream>

using namespace std;

class node
{   public:
        
        int data;
        node *next;

        node(int data)
        {
            this->data = data;
            this->next = nullptr;
        }
};

class linkList
{   
    public:

       node *head = nullptr;
    
    void insert_at_beg(int data)
    {
        node *newNode = new node(data);
        // newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void inset_at_end(int data)
    {
        node *newNode = new node(data);
        // newNode->data = data;
        if (head == nullptr)
            {
                head = newNode;
            
            }else{
                    node *tmp = head;
                    while (tmp->next != nullptr)
                    tmp = tmp->next;
                    tmp->next = newNode;   
                } 
    }

    void pop_front()
            {
                if(head == nullptr)
                    cout<<"Nothing to delete !\n";
                else
                {
                    node *tmp =head;
                    head = head->next;
                    delete tmp;
                }
            } 

            void pop_end()
            {
                node *tmp =head;
                node *tmp2 = head;

                while(tmp->next->next != nullptr)
                    tmp = tmp->next;
                
                tmp2 = tmp->next->next;
                tmp->next = nullptr;
                delete tmp2;


            }            

    void  display()
    {
        node* tmp = head;
        while(tmp != nullptr)
        {
            cout<<tmp->data<<"->";
            tmp = tmp->next;
        }
    }

};



int main()
{
    linkList l;
    l.inset_at_end(9);
    l.insert_at_beg(2);
    l.insert_at_beg(4);
    l.inset_at_end(9);
    // l.pop_front();
    l.pop_end();
    l.pop_end();
    l.insert_at_beg(41);
    l.inset_at_end(92);
    l.pop_end();
    l.insert_at_beg(61);
    
    l.display();

    return 0;
}