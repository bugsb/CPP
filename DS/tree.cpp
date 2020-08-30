#include <iostream>
#include <queue>
using namespace std;

class Node
{
    public:
        int data;
        Node *right;
        Node *left;

        Node(int data)
        {
            this->data = data;
            this->right = nullptr;
            this->left = nullptr;
        }
};

class Tree
{
    public:
        // Node *root = nullptr;

        void insert(Node **root ,int data)
        {
            Node *newNode = new Node(data);
            if(*root == nullptr) { *root = newNode;}


            else
            {
                queue <Node*> q;
                q.push(*root);
                Node *temp;

                while (! q.empty())
                {
                    temp = q.front();
                    q.pop();

                    if(temp->left == nullptr)
                        {
                            temp->left = newNode;
                            // cout<<temp->left->data<<",";
                            return;
                        }
                   else
                        q.push(temp->left);

                    if(temp->right == nullptr)
                            {
                                temp->right = newNode;
                                // cout<<temp->right->data<<",";
                                return;
                            }
                    else
                        q.push(temp->right);


                }

            }
                 //cout<<root->left->left->data; // *It's showing segmentation fault

        }



        void display(Node *root)
        {
                if(root == nullptr)
                    cout<<"-";

            else
            {
                cout<<root->data<<",";

                queue <Node*> q1;
                q1.push(root);
                Node *temp1;

                while (! q1.empty())
                {
                    temp1 = q1.front();
                    q1.pop();

                    if(temp1->left != nullptr)
                        {

                            cout<<temp1->left->data<<",";
                            q1.push(temp1->left);
                        }


                    if(temp1->right != nullptr)
                            {

                                cout<<temp1->right->data<<",";
                        q1.push(temp1->right);

                            }
                }

            }
              
        }

        void preOrder(Node *root)
        {
            if(root == nullptr) return;

            cout<<root->data<<",";
            preOrder(root->left);
            preOrder(root->right);
        }

        void postOrder(Node *root)
        {
            if(root == nullptr) return;

            preOrder(root->left);
            preOrder(root->right);
            cout<<root->data<<",";
        }
        void inOrder(Node *root)
        {
            preOrder(root->left);
            cout<<root->data<<",";
            preOrder(root->right);
        }

};


int main()
{   

    Node *root = nullptr; //? if not want to declare inside class
    Tree t;

    for(int i = 1; i< 8; i++)
        t.insert(&root,i);    //! No need to pass ref if root dec inside class

    // t.display(root->left);
    
    t.preOrder(root);
    cout<<endl;
    t.inOrder(root);
    cout<<endl;
    t.postOrder(root);
    cout<<endl;
    t.display(root);


    return 0;
}