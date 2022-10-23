#include <iostream>
using namespace std;

int main()
{
    int i, j, k, c = 5;

    for (i = 1; i <= 10; i = i + 2)
    {
        for (k = 1; k <= c; k++)                                     //OUTPUT
        {                                                               //1
            cout << " ";                                               //123
        }                                                             //12345
        for (j = 1; j <= i; j++)                                     //1234567
        {                                                           //123456789
            cout << j;                                              
        }
        cout << "\n";
        c--;
    }
    
    return 0;
}