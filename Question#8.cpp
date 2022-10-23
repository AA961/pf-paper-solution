#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    // using for loop
    for (i = 1; i < 10; i++)
    {
        cout << i << endl;
    }

    // using do-while loop
    do
    {
        cout << i << endl;
        i++;
    } while (i <=10);

    return 0;
}