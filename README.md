### README for the Stack Project

#### Project Description:
This project implements a simple stack data structure using a linked list in C++. It provides basic functionalities such as **push**, **pop**, and **top** to interact with the stack. The program demonstrates how to push elements onto the stack, access the top element, and remove elements from the stack.

#### Files:
- `main.cpp`: The main file that contains the logic to test the stack implementation.
- `Stack.h`: The header file that defines the stack class and its associated methods using a linked list.

#### How to Compile:
To compile the program, use a C++ compiler like g++. Run the following command in the terminal:

```bash
g++ -o stack_program main.cpp
```

#### How to Run:
After compilation, you can run the executable:

```bash
./stack_program
```

#### Output Example:
The program will output the following:

```
Elemento en el top: 20
Elemento después del pop: 3
```

#### Stack Operations:
The stack operates in a **Last-In, First-Out (LIFO)** manner, meaning that the last element added to the stack will be the first one to be removed. The program demonstrates this through push and pop operations, and it displays the current top element of the stack at each step.

---

### Explanation of Stacks (for someone new):

A **stack** is a type of data structure that allows data to be stored and retrieved in a particular order. Think of it like a stack of plates:
- You can only add (or "push") a plate on top of the stack.
- You can only remove (or "pop") the top plate.
- You can also "peek" at the top plate without removing it.

In programming terms:
- **Push** adds an item to the stack.
- **Pop** removes the top item from the stack.
- **Top** retrieves the value of the top item without removing it.
- **IsEmpty** checks if the stack is empty.

### Code Explanation:

#### `Stack.h`
This file contains the core implementation of the stack using a linked list. Here's how it works:
- **Node structure**: Defines each element of the stack, containing a value (`data`) and a pointer to the next element in the stack (`next`).
- **Stack class**: 
  - `topNode`: This is a pointer that tracks the top element of the stack.
  - **push(int value)**: Creates a new node with the specified value, adds it to the top of the stack, and updates the `topNode`.
  - **pop()**: Removes the top element from the stack. If the stack is empty, it prints a message.
  - **top()**: Returns the value of the top element. If the stack is empty, it returns 0 and prints a message.
  - **isEmpty()**: Checks whether the stack is empty by verifying if `topNode` is `nullptr`.

#### `main.cpp`
This file tests the stack by pushing several elements onto it, displaying the top element, and then popping an element off to show the updated top.
- Four values are pushed onto the stack: 1, 2, 3, and 20.
- It prints the top element (which will be 20).
- It pops the top element and then prints the new top element (which will be 3).