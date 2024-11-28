#include <iostream>
using namespace std;

struct User
{
    // weight of mails
    float weight;

    // function to calculatetotal price
    float calculateprice()

    {
        float price = 0;
        // for first 50grams
        if (weight <= 50)
        {
            price = 0.5 * float(weight / 10);
        }
        // for next 100 grams
        else if (weight > 50 && weight <= 150)
        {
            price = 2.5 + 0.4 * float((weight - 50) / 10);
        }
        // for next 250grams
        else if (weight > 150 && weight <= 400)
        {
            price = 2.5 + 0.4 * float(100 / 10) + 0.25 * float((weight - 150) / 10);
        }
        // for weight greater than 400 grams
        else
        {
            price = 2.5 + 0.4 * float(100 / 10) + 0.25 * float((250) / 10) + 25 * float((weight - 400) / 1000);
        }
        return price;
    }
};

int main()
{
    // initialising the user
    struct User user;
    cout << "Enter The weight:" << endl;
    cin >> user.weight;
    //displaying the final price
    cout << "The Price to be paid : " << user.calculateprice();
    return 0;
}