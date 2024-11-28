// Experiment 8: (friend function with inline function, friend function with another class)
// Implement Two Class name is class_2,class_1 define one function name is exchange this function work in
// both class properties. friend function can be called by reference inthis case copies of the object are not
// made. Instead a pointer to the address of the object is passed

#include <iostream>
using namespace std;
class Class_1;
class Class_2;

class Class_1
{
    int a1;

public:
    // function to take input for A1
    void get_Data()
    {
        cout << "Enter Value For Class1: ";
        cin >> a1;
    }
    inline int display()
    {
        return a1;
    }
    //declaring friend function to take access private member of both classes
    friend void exchange(Class_1 &c1, Class_2 &c2);
};
class Class_2
{
    int a2;

public:
    // function to take input for A2
    void get_Data()
    {
        cout << "Enter Value For Class2: ";
        cin >> a2;
    }

    inline int display()
    {
        return a2;
    }
    //declaring friend function to take access private member of both classes
    friend void exchange(Class_1 &c1, Class_2 &c2);
};
//function to exchange Properties
void exchange(Class_1 &c1, Class_2 &c2)
{
    c1.a1 = c1.a1 - c2.a2;
    c2.a2 = c1.a1 + c2.a2;
    c1.a1 = c2.a2 - c1.a1;
}
int main()
{
    Class_1 c1;
    Class_2 c2;
    c1.get_Data();
    c2.get_Data();
    cout << "Before Exchange:" << endl;
    cout << "Class_1 Value: " << c1.display() << endl;
    cout << "Class_2 Value: " << c2.display() << endl;
    exchange(c1, c2);
    cout << "After Exchange:" << endl;
    cout << "Class_1 Value: " << c1.display() << endl;
    cout << "Class_2 Value: " << c2.display() << endl;
    return 0;
}