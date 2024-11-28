#include <iostream>
using namespace std;

//class to get details of Employee
class Employee
{
private:
    string name;
    int earning;
    int bonus;

    //function to compute bonus
    inline int compute_bonus()
    {
        if (earning >= 2000)
            return 0.1 * earning;
        else
            return 0;
    }

public:
//Function to take input data
    void input_data()
    {
        cout << "Enter Name:" << endl;
        cin >> name;
        cout << "\nEnter Earning: " << endl;
        cin >> earning;
    }

//Function to display data
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Bonus: " << compute_bonus() << endl;
    }
};

int main()
{
    //emp object
    Employee emp;
    emp.input_data();
    emp.display();
    return 0;
}