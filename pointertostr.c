#include<stdio.h>
struct rectangle
{ int length,bredth;
    
};
int main(){
struct rectangle r ;
r.length=20;
struct rectangle *p=&r;
r.bredth=2;
(*p).length=10;
printf("%d",r.length);
return 0;}
