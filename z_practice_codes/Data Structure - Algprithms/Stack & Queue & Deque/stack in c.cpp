//stack with typedef & structure with pointer

#include <stdio.h>
#define stack_size 10
typedef struct
{
    int top;
    int data[stack_size];
}stack;

void push(stack *s, int item)
{
    if(s->top > stack_size)
    {
        printf("Stack is full\n");
    }
    else
    {
        s->data[s->top] = item;
        s->top++;
    }
}
int pop(stack *s)
{
    int item;

    if(s->top == 0)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        s->top--;
        item = s->data[s->top];
    }

    return item;
}

int main()
{
    int item;
    stack my_stack;

    my_stack.top = 0;

    push(&my_stack, 1);
    push(&my_stack, 3);
    push(&my_stack, 5);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    return 0;
}
