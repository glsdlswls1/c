#include<stdio.h>
int main(){
    char text;
    text=getchar();
    printf("input1:%c\n",text);
    text=getchar();
    while(getchar()!='\n');
    printf("input2:%c\n",text);
    return 0;
}