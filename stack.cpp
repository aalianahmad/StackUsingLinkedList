#include "stack.h"
#include<iostream>
using namespace std;
Stack::Stack():top(nullptr){}

bool Stack::isEmpty()
{
    if (top == nullptr) return true; 
    return false;
}

void Stack::push(char x)
{
    node* newNode = new node(x);
    if (isEmpty())
    {
        this->top = newNode;
        return;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

char Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty ";
        return -1;
    }
    else
    {
        char ch = top->data;
        node* temp = top;
        top = temp->next;
        delete temp;
        return ch;
    }
}

void Stack::display()
{
    node* temp = top;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

char Stack::stackTop()
{
    return this->top->data;
}


