#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>0){
        if(a>1 && a%a==0){
            printf("Prime\n");
        }
    }
    else{
        printf("Not Prime\n");
    }
    return 0;
}