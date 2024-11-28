#include<stdio.h>
void fun(int arr[],int n)
{
   for(int i=0;i<n;i++)
{
printf("  %d ",arr[i]);
}
}
int main(){
    int arr[100]={1,2,3,4};
    fun(arr,4);
return 0;

}