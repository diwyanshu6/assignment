#include<iostream>
using namespace std;
class student{
    private:
       int sub[6];
    public:
        char name[20]="abc";
        char adm[20]="u23";
        char division='g';
        void f1(int sub[]){
            for(int i=0;i<6;i++){
                cin>>sub[i];
            } 
        }
        void f2(int sub[]){
            for(int i=0;i<6;i++){
                cout<<sub[i]<<endl;
            } 
        }
        void f3(int sub[]){
            float sum=0;
            for(int i=0;i<6;i++){
                sum=sum+sub[i];
            } 
            float avg=sum/6;
            cout<<"average is "<<avg;
        }
};
int main(){
    student s1;
    int marks[6];
    s1.f1(marks);
    s1.f2(marks);
    s1.f3(marks);
    return 0;
}