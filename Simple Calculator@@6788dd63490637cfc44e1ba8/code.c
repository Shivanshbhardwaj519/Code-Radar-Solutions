#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",c);
    int result;
    switch(c){
        case '+':
        result = a+b;
        printf("%d",result);
        break;
        case '-':
        result = a-b;
        printf("%d",result);
        break;
        case '*':
        result = a*b;
        printf("%d",result);
        break;
        case '/':
        result = a/b;
        printf("%d",result);
        break;
        default:
        printf("Error");
    }

    return 0;
}