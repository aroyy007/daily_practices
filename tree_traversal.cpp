///Binary search tree traversal and Pre-Order, Post-Order, In-Order

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left,*right;
};

Node* newNode(int data)
{
    Node* node=new Node();
    node->data=data;
    node->left=node->right=NULL;
    return node;
}

void printInorder(Node* node)
{
    if(node!=NULL)
    {
        printInorder(node->left);
        cout<<node->data<<" ";
        printInorder(node->right);
    }

}

void printPreorder(Node* node)
{
    if(node!=NULL)
    {
        cout<<node->data<<" ";
        printPreorder(node->left);
        printPreorder(node->right);
    }

}

void printPostorder(Node* node)
{
    if(node!=NULL)
    {
        printPostorder(node->left);
        printPostorder(node->right);
        cout<<node->data<<" ";
    }

}

int main()
{
    Node* root=newNode(1);
    root -> left=newNode(2);
    root ->right=newNode(3);
    root ->left ->left=newNode(4);
    root ->left ->right=newNode(5);

    cout<<"Preorder traversal of binary tree is ";
    printPreorder(root);
    cout<<endl;

    cout<<"Inorder traversal of binary tree is ";
    printInorder(root);
    cout<<endl;

    cout<<"Postorder traversal of binary tree is ";
    printPostorder(root);
    cout<<endl;



    return 0;
}
