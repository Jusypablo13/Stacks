#ifndef STACK_H
#define STACK_H
#include <iostream> 
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Stack{
    private:
        Node* topNode;
    public:
        Stack(): topNode(nullptr){};

        void push(int value){
            Node* newNode = new Node(); // Sirve para crear un nuevo nodo
            newNode->data = value; // Sirve para asignar el valor al nodo
            newNode->next = topNode; // Sirve para asignar el siguiente nodo
            topNode = newNode; // Sirve para asignar el nuevo nodo como el nodo de arriba
        }

        void pop(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
            }
            Node* temp = topNode; // Sirve para guardar el nodo de arriba
            topNode = topNode->next; // Sirve para asignar el siguiente nodo como el nodo de arriba
            delete temp;
        }

        int top(){
            if(isEmpty()){
                cout << "El stack esta vacio" << endl;
                return 0;
            }
            return topNode->data;
        }
        bool isEmpty(){
            return topNode == nullptr;
        }
};

#endif