
/// stack implementation using linked list with local variable

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node* &top, int item)
{
    Node *temp = new Node();
    temp->data = item;
    temp->next = top;
    top = temp;
}

void pop(Node* &top)
{
    if (top == NULL)
    {
        cout << "Stack Underflow" << endl;
        return;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
}

int Top(Node *top)
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return top->data;
}

void Print(Node *top)
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements from last to first are : ";
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *top = NULL;
    int choice, item;
    cout << "1. Push    "
         << "2. Pop    "
         << "3. Top    "
         << "4. Print   "
         << "5. Exit" << endl;

    do
    {
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element : ";
            cin >> item;
            push(top, item);
            break;

        case 2:
            pop(top);
            break;

        case 3:
            cout << "Top element is : " << Top(top) << endl;
            break;

        case 4:
            Print(top);
            break;

        case 5:
            exit(0);
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}
