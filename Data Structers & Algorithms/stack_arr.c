#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"

stack * tanim(){
    stack *s = (stack *) malloc(sizeof(stack));
    s->dizi=NULL;
    s->boyut=2;
    s->tepe=0;
    return s;
}

int pop(stack *s){
    if(s->dizi==NULL){
        printf("dizi bos");
        return -1;
    }
        
    if (s->tepe-1<=s->boyut/2){
        s->boyut/=2;
        int * dizi2 = (int *) malloc(sizeof(int)*s->boyut);
        for(int i=0;i<s->tepe;i++){
            dizi2[i] = s->dizi[i];
        }
        free(s->dizi);
        s->dizi = dizi2;
    }
    --s->tepe;
    return s->dizi[s->tepe];
    
}

int top(stack *s){
    return s->dizi[s->tepe-1];
}

void push(int number, stack *s){

    if(s->dizi==NULL)
        s->dizi = (int*)malloc(sizeof(int)*s->boyut);

    if(s->tepe>=s->boyut){
        s->boyut*=2;
        int * dizi2 = (int *) malloc(sizeof(int)*s->boyut);
        for(int i=0;i<s->tepe;i++){
            dizi2[i] = s->dizi[i];
        }
        free(s->dizi);
        s->dizi = dizi2;
    }
    s->dizi[s->tepe++] = number;
}

void bastir(stack *s){
    for(int i=0;i<s->tepe;i++){
        printf("%d ", s->dizi[i]);
    }
    printf(" -> %d of %d using\n", s->tepe, s->boyut);
}