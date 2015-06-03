#ifndef _MY_STACK_H
#define _MY_STACK_H

typedef struct{
int arr[5];
int top;
int stacksize;
}Stack;
Stack S;

void stack_push(int x);
int stack_pop();

// The capacity of the stack
int stack_capacity();

// Current available size of the stack
int stack_size();


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty();
int stack_is_full();


#endif //_MY_STACK_H
