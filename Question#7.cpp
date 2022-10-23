#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i < 10)
    {
        if (i < 3)
        {
            i++;
            continue;
        }
        if (i == 7)
        {
            i++;
            break;
        }
        cout << i << "\n";
        i++;
    }
}