#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a = a & ~(a >> b);
    printf("%d\n",a);
    return 0;
}