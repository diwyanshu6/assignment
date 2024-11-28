#include<stdio.h>
int x;
void name(int x){
x=3;
return;
}

int main(){
    x++;
    printf("%d",x);
    return 0;
}