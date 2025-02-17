#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int bt = (a >> b);
    printf("%d\n",bt);
    return 0;
}