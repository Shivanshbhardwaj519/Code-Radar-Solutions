#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=18){
        printf("Eligible\n");
    }
    else if(a<18){
        printf("Not Eligible");
    }
    else{
        printf("enter valid age");
    }
}