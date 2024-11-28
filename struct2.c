#include<stdio.h>
#include<string.h>
int main(){
// {
//     struct student {
//        int rollno;
//        char name[20];
//     };
//     struct student s;
//     s.rollno=2;
//     s.name="diwya";
//     printf("%s",s.name);
//     return 0;
// }{
    int *p;
    int a=5;
    p=&a;
    printf("%d",&p);
    return 0;
}
