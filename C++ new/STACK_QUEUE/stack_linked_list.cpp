#include <iostream>
#include <string> 
using namespace std;

// Node structure for stack
struct Node {
    int data; // Changed to int for evaluation
    struct Node *next;
} *top = NULL;

// Push function for stack
void push(int x) {
    struct Node *t = new Node;
    if (t == NULL) {
        cout << "Stack is full" << endl;
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

// Pop function for stack
int pop() {
    struct Node *t;
    int x = -1;
    if (top == NULL) {
        cout << "Stack is empty" << endl;
    } else {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

// Check precedence of operators
int precedence(char x) {
    if (x == '+' || x == '-') return 1;
    else if (x == '*' || x == '/') return 2;
    return 0;
}


// Check if a character is an operand
int isOperand(char x) {
    return !(x == '+' || x == '-' || x == '*' || x == '/');
}

// Convert infix to postfix
string In_TO_POST(string infix) {
    string postfix = "";
    push('#'); // Sentinel value

    for (int i = 0; i < infix.length(); i++) {
        if (isOperand(infix[i])) {
            postfix += infix[i]; // Append operand to postfix
        } else {
            while (top != NULL && precedence(infix[i]) <= precedence(top->data)) {
                postfix += pop(); // Pop higher or equal precedence operators
            }
            push(infix[i]); // Push current operator onto the stack
        }
    }

    while (top != NULL && top->data != '#') {
        postfix += pop(); // Pop remaining operators
    }

    return postfix;
}

// Evaluate a postfix expression
int Eval(string postfix2) {
    int i = 0, x1, x2, r;
    for (i = 0; postfix2[i] != '\0'; i++) {
        if (isOperand(postfix2[i])) {
            push(postfix2[i] - '0'); // Convert char digit to int
        } else {
             x2 = pop(); // Pop second operand
            x1 = pop(); // Pop first operand
            switch (postfix2[i]) {
                case '+': r = x1 + x2; break;
                case '*': r = x1 * x2; break;
                case '-': r = x1 - x2; break;
                case '/': r = x1 / x2; break;
            }
            push(r); // Push result back to stack
        }
    }
    return pop(); // Final result
}

int main() {
    string infix = "a+b*c-d/e";
    string postfix = In_TO_POST(infix);
    cout << "Postfix: " << postfix << endl;
//
  //  string postfix2 = "234*+82/-";
   // cout << "Result: " << Eval(postfix2) << endl;

    return 0;
}
