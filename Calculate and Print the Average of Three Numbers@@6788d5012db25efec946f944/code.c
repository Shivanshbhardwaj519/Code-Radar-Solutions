#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    scanf("%d%d%d",&num1, &num2, &num3);
    float avg =(num1 + num2 + num3)/3;
    printf("Average: %.3f",avg);
    return 0;
}