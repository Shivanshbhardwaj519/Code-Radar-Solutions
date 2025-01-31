#include<stdio.h>
int main(){
    char abc;
    scanf("%c",&abc);
    if(abc=='A'){
        printf("Excellent");
    }
    else if(abc=='B'){
        printf("Good");
    }
    else if(abc=='C'){
        printf("Average");
    }
    else if(abc=='D'){
        printf("Below Average");
    }
    else if(abc=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}