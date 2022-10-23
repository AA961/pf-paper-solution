#include <iostream>
using namespace std;

int displyNumber(int n)
{
    if (n == 0)
    {
        return 1;
    }
    cout << n << endl;
    return displyNumber(n - 1);
}

int main()
{
    int number;

    cout << "Enter A Number :";
    cin >> number;
    displyNumber(number);
}