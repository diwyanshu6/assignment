#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    void get_details()
    {
        cout << "Enter the name of Student: " << endl;
        cin >> name;
        cout << "Enter marks of student: " << endl;
        cin >> marks;
    }
};
int main()
{
    int no_of_students;
    cout << "Enter Number of students: " << endl;
    cin >> no_of_students;
    Student students[no_of_students];
    for (int i = 0; i < no_of_students; i++)
    {
        students[i].get_details();
    }
    // calculate max marks
    int max_marks = students[0].marks;
    int topper_index=0;
    for (int i = 1; i < no_of_students; i++)
    {
        if(students[i].marks>max_marks)
        {
            max_marks=students[i].marks;
            topper_index=i;
        }
    }

    cout<<"The topper: "<<students[topper_index].name<<" with "<<students[topper_index].marks<<" marks";

    return 0;
}