#include<stdio.h>
int ins( int a[],int size, int index, int capacity, int element){
    int i;
    if(capacity<size){
        return -1;
    }
    for(i= size ;i>= index;i--){
        a[i+1]=a[i];
    }
    a[index]=element;
    return 1;
}
void display (int a[],int n){
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}

int main(){
    int size=5,index=1,capacity=40 ,element=45;
    int a[40]={1,2,3,4,5};
    ins ( a,size,index,capacity,element);
    display (a,size+1);
    return 0 ;
}