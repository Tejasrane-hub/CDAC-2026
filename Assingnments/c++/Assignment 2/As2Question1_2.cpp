#include <iostream>
#include <iomanip>

using namespace std;

double reorderCost(int qty, double unitPrice)        //With one int and one double 
{
    return qty * unitPrice;
}

double reorderCost(double qty, double unitPrice)            //with double value
{
    return qty * unitPrice;
}

double reorderCost(int qty, double unitPrice, double taxRate)
{
    double cost = qty * unitPrice;

    double tax = cost * taxRate / 100;

    return cost + tax;
}

double applyDiscount(double price, double discountPercent = 10.0)
{
    double discount = price * discountPercent / 100;

    return price - discount;
}

int main()
{
    cout << fixed << setprecision(2);

    // Calling version 1: int quantity
    double cost1 = reorderCost(10, 50.0);

    cout << "Reorder cost (integer quantity): "
         << cost1 << endl;


    // Calling version 2: double quantity
    double cost2 = reorderCost(2.5, 100.0);

    cout << "Reorder cost (fractional quantity): "
         << cost2 << endl;


    // Calling version 3: quantity + price + tax
    double cost3 = reorderCost(10, 50.0, 18.0);

    cout << "Reorder cost with tax: "
         << cost3 << endl;


    // Calling applyDiscount with default 10%
    double discountedPrice1 = applyDiscount(1000);

    cout << "Price after default discount: "
         << discountedPrice1 << endl;


    // Calling applyDiscount with custom discount
    double discountedPrice2 = applyDiscount(1000, 20.0);

    cout << "Price after 20% discount: "
         << discountedPrice2 << endl;


    return 0;
}