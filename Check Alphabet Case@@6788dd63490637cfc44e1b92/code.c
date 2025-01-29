#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    int s = a;
    if(s>=65 && s<=90){
        printf("Uppercase");
    }
    else if(s>=97 && s<=122){
        printf("Lowercase");
    }
}