#include <iostream>
using namespace std;

int main()
{
    char type;
    int speed;

    cout << "Enter Vahicle Type \n 'L' for Light Vehicle \n 'H' for Heavy Vehicle: ";
    cin >> type;

    cout << "Enter Speed: ";
    cin >> speed;

    if (type == 'L' && speed <= 120 || type == 'H' && speed <= 110)
    {
        cout << "Pass... No Fine \n";
    }
    else
    {
        cout << "Break... Pay Fine \n";
    }

    return 0;
}