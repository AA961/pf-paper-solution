#include <iostream>
using namespace std;

int main()
{
    int totalMarks, obtMarks;
    float percentage;

    cout << "Enter Total Marks: ";
    cin >> totalMarks;

    cout << "Enter Obtain Marks: ";
    cin >> obtMarks;

    percentage = obtMarks * 100 / totalMarks;

    cout << "Your Marks Percentage is: " << percentage << endl;

    return 0;
}