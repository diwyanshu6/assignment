// The librarian in a library wants an application that will calculate the due date for a book given the issue date. The no. Of
// days in which the book is due can be decided by the librarian at the time of issued a book. For e.g. If the librarian enters
// the current date as 14-01-99 and the no of days in which the book is due as 15, then your program should calculate the
// due date and give the output as 29-01-99.
// Note: Use the concept of inline, default argument, const function and static function.

#include <iostream>
using namespace std;

class Book
{
private:
    // attributes of book
    int day, month, year;
    int no_of_days;

public:
    // function to set date
    void set_date()
    {
        cout << "Enter Daydate of taking: " << endl;
        cin >> day;
        cout << "Enter month of taking: " << endl;
        cin >> month;
        cout << "Enter year of taking: " << endl;
        cin >> year;
    }
    // function to get no of days
    inline void get_days()
    {
        cout << "Enter time(in days) of return: " << endl;
        cin >> no_of_days;
    }
    // function to calculate due date
    void calculate_due_date()
    {
        int newday = day, newmonth = month, newyear = year;
        // if month consists 31 days
        if (newmonth == 1 || newmonth == 3 || newmonth == 5 || newmonth == 7 || newmonth == 8 || newmonth == 10 || newmonth == 12)
        {
            for (int day = 1; day <= no_of_days; day++)
            {
                newday = newday + 1;
                if (newday > 31 && newmonth != 12)
                {
                    newmonth = (newmonth) % 12 + 1;
                    cout << newmonth << endl;
                    newday = 1;
                }
                else if (newday > 31 && newmonth == 12)
                {
                    newmonth = (newmonth) % 12 + 1;
                    cout << newmonth << endl;
                    newyear = newyear + 1;
                    newday = 1;
                }
            }
        }
        // for february and leap year cases
        else if (newmonth == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
        {
            for (int day = 1; day <= no_of_days; day++)
            {
                newday = newday + 1;
                if (newday > 29)
                {
                    newmonth = (newmonth) % 12 + 1;
                    cout << newmonth << endl;
                    newday = 1;
                }
            }
        }
        else if (newmonth == 2 && newyear % 4 != 0 && newyear % 400 != 0)
        {
            for (int day = 1; day <= no_of_days; day++)
            {
                newday = newday + 1;
                if (newday > 28)
                {
                    newmonth = (newmonth) % 12 + 1;
                    cout << newmonth << endl;
                    newday = 1;
                }
            }
        }
        // for month with 30 days
        else
        {
            for (int day = 1; day <= no_of_days; day++)
            {
                newday = newday + 1;
                if (newday > 30 && month != 12)
                {
                    newmonth = (newmonth) % 12 + 1;
                    cout << newmonth << endl;
                    newday = 1;
                }
            }
        }
        cout << "The return date: " << newday << "\\" << newmonth << "\\" << newyear << endl;
    }
};

int main()
{
    Book b1;
    b1.set_date();
    b1.get_days();
    b1.calculate_due_date();
    return 0;
}