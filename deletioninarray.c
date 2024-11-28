#include<stdio.h>
void del(int a[],int size,int index){
    for(int i=index;i<size -1;i++)
    { a[i]=a[i+1];

    }

} 
void display(int a[], int n){
    for(int j=0;j<n;j++)
    printf("%d",a[j]);
}

int main(){
    int size=5,index=2;
    int a[100]={1,2,3,4,5};
    del(a,size,index);
    
    display(a,size -1);
    return 0;

}