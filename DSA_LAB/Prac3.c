#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int size;
    int top;
    int *S;
};

void create(struct Stack *st) {
    printf("Enter the size of the stack: ");
    scanf("%d", &st->size);
    st->S = (int *)malloc(st->size * sizeof(int));
    st->top = -1;
}

void push(struct Stack *st, int x) {
    if (st->top == st->size - 1) {
        printf("Stack overflow\n");
    } else {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct Stack *st) {
    int x = -1;
    if (st->top == -1) {
        printf("Stack underflow\n");
    } else {
        x = st->S[st->top--];
    }
    return x;
}

int peek(struct Stack st,int x) {
  int  index = st.top;
    if (index < 0 || index > st.top) {
        printf("Invalid position\n");
        return -1;
    }
    return st.S[index];
}

void display(struct Stack st) {
    for (int i = st.top; i >= 0; i--) {
        printf("%d ", st.S[i]);
    }
    printf("\n");
}

int main() {
    struct Stack st;
    create(&st);

    push(&st, 100);
    push(&st, 200);
    push(&st, 300);
    push(&st, 400);

    printf("Stack elements: ");
    display(st);

    printf("Popped element: %d\n", pop(&st));
    printf("Popped element: %d\n", pop(&st));

    printf("Stack after popping: ");
    display(st);

    printf("Peek at position 2: %d\n", peek(st, 2));

    free(st.S);
    return 0;
}
