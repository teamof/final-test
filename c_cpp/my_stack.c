#include <stdio.h>
#include <malloc.h>

typedef struct{
int arr[5];
int top;
int stacksize;
}Stack;
Stack S;
void stack_push(int x)
{
S.arr[S.top]=x;
S.top++;
}

int stack_pop()
{
S.top--;
return S.arr[S.top];
}

int stack_capacity()
{
return S.top;
}
int stack_size()
{
return S.stacksize;
}
int stack_is_empty()
{
if(S.top==0)
return 1;
else
return 0;
}
int stack_is_full()
{
if(S.top<S.stacksize)
return 0;
else 
return 1;
}

