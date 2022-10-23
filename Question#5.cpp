#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    do
    {
        x++;
    } while (x++ > 12);
    cout << x << endl;
    return 0;
}

// Output will be 12