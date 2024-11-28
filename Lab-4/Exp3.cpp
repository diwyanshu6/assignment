#include <iostream>
using namespace std;

class Tax
{
private:
    string name;
    int income;
    double tax_due;

public:
//function to input Income Details
    void input_data()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your Income: " << endl;
        cin >> income;
    }
    //function to calculate tax
    void calculate_tax()
    {
        if (income >= 100001 && income <= 150000)
        {
            tax_due = (income - 100000) * 0.1;
        }
        else if (income >= 150001 && income <= 200000)
        {
            tax_due = (income - 150000) * 0.2;
        }
        else if (income > 200000)
        {
            tax_due = (income - 200000) * 0.3;
        }
        else
        {
            tax_due = 0;
        }
    }
    //function to display
    void display()
    {
        calculate_tax();
        cout << "Name: " << name << endl;
        cout << "Income: " << income << endl;
        cout << "Tax: " << tax_due << endl;
    }
};
int main()
{
    Tax t;
    t.input_data();
    t.display();
    return 0;
}