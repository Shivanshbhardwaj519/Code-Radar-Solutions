#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    
    for(int i=1; i>=10; i++){
        int c = a*i;
        printf("%d x %d = %d\n",a,i,c);
    }
}