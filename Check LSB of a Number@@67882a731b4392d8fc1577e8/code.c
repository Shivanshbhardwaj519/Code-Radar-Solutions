#include<stdio.h>
int main(){
    int a, lsb;
    scanf("%d",&a);
    if (a & 1){
        printf("Set\n");
    }
    else{
        printf("Not Set\n")
    }
    return 0;
}