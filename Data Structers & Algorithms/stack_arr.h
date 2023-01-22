#ifndef stack_arr
#define stack_arr
typedef struct s{
    int boyut;
    int tepe;
    int * dizi;
}s;

typedef s stack;
stack * tanim();
int pop(stack *);
int top(stack *);
void push(int number, stack *);
void bastir(stack *);
#endif