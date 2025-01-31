#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    if (a<=1){
        printf("Not Prime\n");
    }
    else{
        for(i=2; i<num; i++){
            if(num%i==0){
                printf("Not Prime\n");
                return 0;
            }
        }
        printf("Prime\n");
    }
    return 0;
}