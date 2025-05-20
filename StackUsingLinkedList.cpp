#include <iostream>
using namespace std;

class node
{
public: 
    int data;
    node *next;

    node() 
    {
        next = NULL;
    }
};

class stack
{
private :
    node * top;

public :
    stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        node * newnode = new node();
        newnode->data = value;
        newnode->next = top;
        top = newnode;
        cout << "push value: " << value << endl;
        return value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is Empty" << endl;
        }

        cout << "popped value: " << top->data << endl;
        top = top->next;
    }

    void peek()
    {
        if (top == NULL)
        {
            cout << "list is Empty" << endl;
        }
        else
        {
            node * current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }
};

