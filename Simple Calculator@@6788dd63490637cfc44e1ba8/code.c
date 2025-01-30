#include <stdio.h>
int main() {
    int a,b;
    char opm;
    scanf("%ld %ld",&a,&b);
    scanf("%c",c);
    int result;
    switch(opm){
        case '+':
        result = a + b;
        printf("%d",result);
        break;
        case '-':
        result = a - b;
        printf("%d",result);
        break;
        case '*':
        result = a * b;
        printf("%d",result);
        break;
        case '/':
        result = a / b;
        printf("%d",result);
        break;
        default:
        printf("Error");
    }

    return 0;
}