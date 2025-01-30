#include <stdio.h>
int main() {
    int a,b;
    char opm;
    scanf("%d%d",&a,&b);
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
            if(b!=0){
                result = a/b;
                printf("%d",result);
            
            }
            else{
                printf("Error");
            }
            break;
        default:
        printf("Error");
    }

    return 0;
}