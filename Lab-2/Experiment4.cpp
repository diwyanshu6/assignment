// Experiment 4. Create a class named Student with the following specifications:
// Private Members:
// admno of type integer to represent admission number
// Name of type character to represent name ( max 20 characters)
// marksEng of type float to represent marks in the subject of English
// marKsMaths of type float to represent marks in the subject of
// mathematics
// marksSci of type float to represent marks in the subject of Science
// total of type float to represent total marks
// compute() A function to compute sum of marks in English, Maths and
// Science
// Public Members:
// readData() A function to accept the data for admNo, name, marksEng,
// MarksMaths, marksSci. It also invokes compute function to
// Calculate total marks.
// ShowData() A function that display all the data member on the
// computer screen.

// Note: Use the concept of inline, scope resolution, default argument, const function and static function.

#include <iostream>
using namespace std;

class Student
{
private:
    string admno;
    char name[20];
    float marksEng, marksMaths, marksSci, total;
    float compute(float marksEng, float marksMaths, float marksSci)
    {
        total = marksEng + marksSci + marksMaths;
        return total;
    }

public:
    void readData()
    {
        cout << "Enter Admission Number: ";
        cin >> admno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks in English: ";
        cin >> marksEng;
        cout << "Enter Marks in Maths: ";
        cin >> marksMaths;
        cout << "Enter Marks in sci: ";
        cin >> marksSci;
        total = compute(marksEng, marksMaths, marksSci);
    }
    void ShowData()
    {
        cout << "Admno: " << admno << endl;
        cout << "Name: " << name << endl;
        cout << "Total: " << total << endl;
    }
};

int main()
{
    Student s1;
    s1.readData();
    s1.ShowData();
    return 0;
}