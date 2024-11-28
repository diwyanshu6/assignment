#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int pagecount;
    void getdata(int count)
    {
        cout << "The page count of Book : " << count;
    }
};

struct Ebook
{
    int timeminutes;
    void getdata(int min)
    {
        cout << "The Time(minutes) of Book : " << min;
    }
};

struct Publication
{
    string title;
    int price;
    string author;
    struct Book book;
    struct Ebook ebook;

    void getinput()
    {
        cout << "Enter the page Count";
        cin >> book.pagecount;
        cout << "Enter the Time Count";
        cin >> Ebook.pagecount;
    }
};

int main()
{
    return 0;
}