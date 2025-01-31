#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a == 'a'|| a =='A'|| a == 'e'|| a =='E'|| a == 'i'|| a =='I'|| a == 'o'|| a== 'O'|| a=='u' || a=='U' ){
        printf("Vowel");
    }
    else if(a == '0' || a== '1'||a=='2'|| a=='3'|| a=='4'|| a=='5'|| a=='6'|| a=='7'|| a=='8'|| a=='9'){
        printf("Digit");
    }
    else{
        printf("Consonant");
    }
    return 0;
}