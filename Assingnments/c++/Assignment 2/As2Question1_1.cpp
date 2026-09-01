#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
class Product
{
private:
    int productId;
    string name;
    double price;
    int quantity;

public:
    void acceptDetails()
    {
        cout << "Enter Product ID : ";
        cin >> productId;

        cout << "Enter Product Name : ";
        cin >> name;

        cout << "Enter Price : ";
        cin >> price;

        cout << "Enter Quantity : ";
        cin >> quantity;
    }
    void  displayDetails() const
    {
        cout << left
             << setw(10) << productId
             << setw(10) << name
             << setw(10) << price
             << setw(10) << quantity
             << setw(10) << totalValue();
        cout << endl;
    }
    double totalValue() const
    {
        return price * quantity;

    }
    bool isLowStock(int threshold) const
    {
        return quantity > threshold;
    }
};
int main()
{
    Product products[5];

    cout << "======== ENTER PRODUCT DETAILS ========";

    for(int i=0; i<5; i++)
    {
        cout << "\nProduct" << i+1 << endl;
        products[i].acceptDetails();
    }

    cout << "\n\n=============== INVENTORY REPORT ===============" << endl;

    cout << left
             << setw(10) << "ID"
             << setw(10) << "Name"
             << setw(10) << "Price"
             << setw(10) << "Quantity"
             << setw(10) << "Total Value";
        cout << endl;

    cout << "-----------------------------------------------------------"<<endl;
    
    for(int i=0; i<5; i++)
    {
        products[i].displayDetails();
    }
    // Find product with highest total value
    int highestIndex = 0;

    for (int i = 1; i < 5; i++)
    {
        if (products[i].totalValue() >
            products[highestIndex].totalValue())
        {
            highestIndex = i;
        }
    }

    cout << "\nHighest Value Product: "
         << endl;

    products[highestIndex].displayDetails();


    // Ask user for stock threshold
    int threshold;

    cout << "\nEnter stock threshold: ";
    cin >> threshold;


    // Display low-stock products
    cout << "\n===== LOW STOCK PRODUCTS =====" << endl;

    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (products[i].isLowStock(threshold))
        {
            products[i].displayDetails();
            found = true;
        }
    }

    if (!found)
    {
        cout << "No products are below the given threshold."
             << endl;
    }

    return 0;

}