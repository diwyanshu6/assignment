#include <iostream>
using namespace std;

class Data
{
private:
    int day;
    int month;
    int year;

public:
    // Zero argument Constructor
    Data()
    {
        cout << "default Constructor";
    }

    // Parameterized Constructor
    Data(int day = 12, int month = 10, int year = 2000)

    {

        this->day = day;
        this->month = month;
        this->year = year;
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy Constructor
    Data(Data &d1)
    {
        this->day = d1.day;
        this->month = d1.month;
        this->year = d1.year;
        cout << "copy Constructor called" << endl;
    }

    // Function to display the date
    void display() const
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    // Using default constructor
    // Data d1;
    // d1.display(); // Output: Date: 12/3/1993

    // Using parameterized constructor
    Data d2(22, 12, 2000);
    d2.display(); // Output: Date: 22/12/2000

    // Using copy constructor
    Data d3(d2);
    d3.display(); // Output: Date: 22/12/2000

    return 0;
}
