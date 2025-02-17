#inlude<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf(" %d",&b);
    
    int bt = (a >> b) & 1;
    printf("%d",bt);
    return 0;
}