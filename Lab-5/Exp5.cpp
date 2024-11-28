
#include <iostream>
#include <string>
using namespace std;

class Publication
{
public:
    string title;
    double price;
    string author;
};

// Derived structure for Book
class Book : public Publication
{
public:
    int pcount;

    // Function to get data for book
    void getData()
    {
        cout << "Enter title: " << endl;
        cin >> title;
        cout << "Enter price: " << endl;
        cin >> price;
        cout << "Enter author: " << endl;
        cin >> author;
        cout << "Enter Page count: " << endl;
        cin >> pcount;
    }

    // Function to display data for book
    void displayData() const
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Author: " << author << endl;
        cout << "Page Count: " << pcount << endl;
    }
};

// Derived structure for Ebook
struct Ebook : public Publication
{
    double playingTime;

    // Function to get data for ebook

    void getData()
    {
        cout << "Enter title: " << endl;
        cin >> title;
        cout << "Enter price: " << endl;
        cin >> price;
        cout << "Enter author: " << endl;
        cin >> author;
        cout << "Enter Playing Time: " << endl;
        cin >> playingTime;
    }

    void displayData()
    {

        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Author: " << author << endl;
        cout << "Ebook Playing Time: " << playingTime << " hours" << endl;
    }
};

int main()
{
    // Book data input and display
    Book book;
    cout << "Enter details for the book:\n";
    book.getData();
    cout << "\nBook details:\n";
    book.displayData();

    // Ebook data input and display
    Ebook ebook;
    cout << "\nEnter details for the ebook:\n";
    ebook.getData();
    cout << "\nEbook details:\n";
    ebook.displayData();
    return 0;
}
