#include <stdio.h>
#include <stdlib.h>

int boyut = 2;
int * dizi;

int tepe = 0;

int pop();
int top();
void push(int);
void bastir();


void main(){

    dizi = (int*)malloc(sizeof(int)*boyut);
    
    push(45);
    push(75);
    push(54);
    push(34);
    push(1);
    push(4);
    push(3);
    push(7);
    push(124);

    for(int i=0;i<6;i++)
        pop();

    
    
    /*
    for(int i=0;i<=30;i+=3){
        push(i);
        bastir();
        if(i%2==0)
            pop();
    }*/
    

}


int pop(){
    if (tepe-1<=boyut/2){
        boyut/=2;
        int * dizi2 = (int *) malloc(sizeof(int)*boyut);
        for(int i=0;i<tepe;i++){
            dizi2[i] = dizi[i];
        }
        free(dizi);
        dizi = dizi2;
    }
    --tepe;
    bastir();
    return dizi[tepe];
    
}

int top(){
    return dizi[tepe-1];
}

void push(int number){
    if(tepe>=boyut){
        boyut*=2;
        int * dizi2 = (int *) malloc(sizeof(int)*boyut);
        for(int i=0;i<tepe;i++){
            dizi2[i] = dizi[i];
        }
        free(dizi);
        dizi = dizi2;
    }
    dizi[tepe++] = number;
    bastir();
}

void bastir(){
    for(int i=0;i<tepe;i++){
        printf("%d ", dizi[i]);
    }
    printf(" -> %d of %d using\n", tepe, boyut);
}