// Experiment 1: A department store places an order with a company for n pieces of miners, m pieces
// of toasters, and P number of fans. The cost of each of item is as follow:
// Miners : Rs. 1,500 per piece
// Toaster : Rs. 200 per piece
// Fan : Rs. 450 per piece
// The discount allowed for various items are 5% for miners, 15% for fan, and 10% for toaster.
// The company charge 10% as sales tax on all items on net value after deducting the discount.
// Write a program that reads m, n, and p and computer the amount to be paid by the store.
// Note: Use the concept of inline, default argument, const function and static function.

#include <iostream>
using namespace std;

class Company
{
private:
    // defining the attributes of the company
    // no of miners
    int m;
    // no of toasters
    int t;
    // no of fans
    int f;

public:
    // function to take no's of attributes
    void getnumbers()
    {
        cout << "Enter No of Miners: " << endl;
        cin >> m;
        cout << "Enter No of Toasters: " << endl;
        cin >> t;
        cout << "Enter No of Fans: " << endl;
        cin >> f;
    }
    // function to calculate Total Price
    inline double calculateprice(int minercost = 1500, float minerdiscount = 0.05, int toastercost = 200, float toasterdiscount = 0.15, int fancost = 450, float fandiscount = 0.1)
    {
        double bill = 0;
        int tax = 0.1;

        double Miner_cost = (minercost * m) - (minercost * m * minerdiscount);
        double Toaster_cost = (toastercost * t) - (toastercost * t * toasterdiscount);
        double Fan_cost = (fancost * f) - (fancost * f * fandiscount);
        bill = (Miner_cost + Toaster_cost + Fan_cost) + (Miner_cost + Toaster_cost + Fan_cost) * tax;
        return bill;
    }
};

int main()
{
    // declaring Class
    Company Seller;
    Seller.getnumbers();
    cout << "The Total Bill is: " << Seller.calculateprice() << endl;
    return 0;
}