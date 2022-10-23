#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << "  ";
            num = num + 2;
        }
        cout << "\n";
    }

    return 0;
}
// output
// 1
// 3  5
// 7  9  11
// 13  15  17  19
// 21  23  25  27  29