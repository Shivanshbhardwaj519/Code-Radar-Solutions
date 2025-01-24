#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hoby[100];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hoby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hoby);
    return 0;
}