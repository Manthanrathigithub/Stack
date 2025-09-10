#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data;
    struct Node *next;
} *top = NULL;

// ---------------- Stack Operations ----------------
void push(char x) {
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL) {
        printf("Stack overflow\n");
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop() {
    struct Node *t;
    char x = -1;
    if (top == NULL) {
        printf("Stack underflow\n");
    } else {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

char stackTop() {
    if (top != NULL)
        return top->data;
    return '\0';
}

int isEmpty() {
    return top == NULL;
}

// ---------------- Helper Functions ----------------
int precedence(char x) {
    if (x == '+' || x == '-') return 1;
    else if (x == '*' || x == '/') return 2;
    else if (x == '^') return 3; // Highest precedence
    return 0;
}

int isRightAssociative(char x) {
    return (x == '^'); // only ^ is right-associative
}

int isOperand(char x) {
    return !(x == '+' || x == '-' || x == '*' || x == '/' || x == '^' || x == '(' || x == ')');
}

// ---------------- Infix to Postfix ----------------
char* In_TO_POST(char *infix) {
    int len = strlen(infix);
    char *postfix = (char *)malloc((len + 1) * sizeof(char));
    int i = 0, j = 0;

    for (i = 0; i < len; i++) {
        if (isOperand(infix[i])) {
            postfix[j++] = infix[i]; // Append operand
        } 
        else if (infix[i] == '(') {
            push(infix[i]); // Push '('
        } 
        else if (infix[i] == ')') {
            while (!isEmpty() && stackTop() != '(') {
                postfix[j++] = pop(); // Pop until '('
            }
            pop(); // Remove '('
        } 
        else { // Operator
            while (!isEmpty() && stackTop() != '(' &&
                   (precedence(stackTop()) > precedence(infix[i]) ||
                   (precedence(stackTop()) == precedence(infix[i]) && !isRightAssociative(infix[i])))) {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
    }

    while (!isEmpty()) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
    return postfix;
}

// ---------------- Main ----------------
int main() {
    char infix[100];
    printf("Enter infix expression: ");
    scanf("%s", infix);

    char *postfix = In_TO_POST(infix);
    printf("Postfix expression: %s\n", postfix);

    free(postfix);
    return 0;
}
