#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"

int main(){
    
    stack *stack1 = tanim();
    stack *stack2 = tanim();

    for(int i=0;i<10;i++){
        push(i,stack1);
        bastir(stack1);

    }

    printf("==================\n");

    for(int i=0;i<10;i++){
        push(pop(stack1),stack2);
        bastir(stack2);
    }

    printf("==================\n");
    bastir(stack1);
    bastir(stack2);

}