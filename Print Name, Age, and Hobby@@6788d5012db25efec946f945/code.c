#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hooby[100];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("\n%s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hooby);
    return 0;
}