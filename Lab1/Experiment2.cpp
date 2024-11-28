#include <iostream>
using namespace std;

// details of miners
struct miners
{
    long int miners;
    int cost = 1500;
    float discount = 0.05;
};

// details of toasters
struct toasters
{
    long int toasters;
    int cost = 200;
    float discount = 0.1;
};

// details of fans
struct fans
{
    long int fans;
    int cost = 450;
    float discount = 0.15;
};

// structure of order
struct Order
{
    // function to calculate toatal price
    double calculateprice(long int m, long int t, long int f)
    {
        double bill = 0;
        int tax = 0.1;
        struct miners mr;
        struct toasters tr;
        struct fans fn;

        double minercost = (mr.cost * m) - (mr.cost * m * mr.discount);
        double toastercost = (tr.cost * m) - (tr.cost * t * tr.discount);
        double fancost = (fn.cost * f) - (fn.cost * f * fn.discount);
        bill = (minercost + toastercost + fancost) + (minercost + toastercost + fancost) * tax;
        return bill;
    }
};

int main()
{
    struct Order order;
    struct miners mr;
    struct toasters tr;
    struct fans fn;
    cout << "Enter Number of miners:" << endl;
    cin >> mr.miners;
    cout << "Enter Number of Toaster:" << endl;
    cin >> tr.toasters;
    cout << "Enter Number of Fans:" << endl;
    cin >> fn.fans;
    cout << "The total price : " << order.calculateprice(mr.miners, tr.toasters, fn.fans);
    return 0;
}