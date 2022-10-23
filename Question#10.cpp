#include <iostream>
using namespace std;

struct students
{
    string name;
    int rollNo;
};

int main()
{
    struct students details[5];
    int i = 0;

    // Taking Inputs in array of structure

    for (i = 0; i < 4; i++)
    {
        cout << "Enter Student Name : ";
        cin >> details[i].name;

        cout << "Enter Studentn Roll NO : ";
        cin >> details[i].rollNo;
    }

    // displaying data from array of structure

    for (i = 0; i < 4; i++)
    {
        cout << details[i].name << endl;
        cout << details[i].rollNo << endl;
    }

    return 0;
}