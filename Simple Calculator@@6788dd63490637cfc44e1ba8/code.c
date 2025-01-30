#include <stdio.h>
int main() {
    double a,b;
    char opm;
    scanf("%ld %ld",&a,&b);
    scanf("%c",&opm);
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