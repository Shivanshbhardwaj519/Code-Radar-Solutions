#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    while(a>=0 && a==a){
        printf("%d ",a);
        a++;
    }
    return 0;
}