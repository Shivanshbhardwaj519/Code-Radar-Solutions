#include <stdio.h>
int main() {
    char abc;
    scanf("%c",&abc);
    if(abc=='R'){
        printf("Stop");
    }
    else if(abc=='G'){
        printf("Go");
    }
    else if(abc=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}