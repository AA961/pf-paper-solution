#include <iostream>
using namespace std;

int main()
{
    float amount, intrestRate, years, intrest;

    cout << "Enter Amount: ";
    cin >> amount;

    cout << "Enter Intrest Rate: ";
    cin >> intrestRate;

    cout << "Enter Years :";
    cin >> years;

    intrest = (amount * intrestRate * years) / 100;

    cout << "Net Intrest = " << intrest << endl;

    return 0;
}