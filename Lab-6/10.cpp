// Experiment 10: (Operator Overloading)
// Design a class named vector to model a one-dimensional array with integer elements.
// Overload the followimg operators to perform the intended task:
// (i) Operator ‘<<’ to output a vector object.
// OOP’s LAB-3,Lab-4, Lab-5 Experiment (Class, Object and OOP’s Concepts)
// Praveen Kumar Chandaliya, DoAI, SVNIT: Object Oriented Programming Lab
// (ii) Operator ‘>>’ to input a vector object in the form [10, 20, 30, . . .].
// (iii) Operator ‘+’ to add two vector objects.
// (iv) Operator ‘-‘ to subtract a given vector object from another vector object.


#include<iostream>
using namespace std;

class Vector{
    int size;
    

    public:
    int *arr;
    Vector(int size){
        this->size=size;
        arr = new int[size];
        
    }

    ~Vector(){
        delete [] arr;
        
    }

    friend void operator>>(istream&mycin,Vector&v){
        cout<<"Enter Elements:";
               for(int i=0;i<v.size;i++){
                   mycin>>v.arr[i];
               }
               
    }

    friend void operator<<(ostream&mycout,Vector &v){
        cout<<"Entered Elements:";
        for(int i=0;i<v.size;i++){
            mycout<<v.arr[i]<<" ";
        }
        mycout<<endl;
    }

    friend void operator+(Vector v1,Vector v2){
                Vector v3(v1.size);

        for(int i=0;i<v1.size;i++){
            v3.arr[i]=v1.arr[i]+v2.arr[i];
        }
        cout<<v3;
        return;
    };
    friend void operator-(Vector v1,Vector v2){
        Vector v4(v1.size);

        for(int i=0;i<v1.size;i++){
            v4.arr[i]=v1.arr[i]-v2.arr[i];
        }
        cout<<v4;
        return;
    };

};

int main(){

    Vector v1(5);
    cin>>v1;
    
    Vector v2(5);
    cin>>v2;
    
    v1+v2;
    v1-v2;
    
    
    
    return 0;



}