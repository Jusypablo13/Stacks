#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(20);

    cout << "Elemento en el top: " << stack.top() << endl;
    stack.pop();
    cout << "Elemento después del pop: " << stack.top() << endl;

    return 0;
}