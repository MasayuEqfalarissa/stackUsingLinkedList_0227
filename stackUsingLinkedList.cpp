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

int main ()
{
    stack stact;

    int choise = 0;
    int value ;

    while (choise != 5)
    {
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. exit\n";
        cout << "enter your choice : ";
        cin >> choise;

        switch (choise)
        {
        case 1:
            cout << "enter the value to push : ";
            cin>> value;
            stact.push(value);
            break;

        case 2: 
            if (!stact.isEmpty())
            {
                stact.pop();
            }
            else
            {
                cout << "stact is Empty. cannot pop." << endl;
            }
            break;

        case 3:
            if (!stact.isEmpty())
            {
                stact.peek();
            }
            else
            {
                cout << "stact is Empty. No top value." << endl;
            }
            break;

        case 4:
            cout << "exiting program." << endl;
            break;
        default:
            cout << "invalid choise. try again." << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}


