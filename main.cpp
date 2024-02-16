#include <iostream>

using namespace std;

int main()
{
    /* Q\ Write C++ code to ask the user for three integers. Then calculate and print the average of the
        three numbers */

    int num1,num2,num3, average;

    cout << "Please input your first number: ";
    cin >> num1;

    cout << "Please input your second number: ";
    cin >> num2;

    cout << "Please input your third number: ";
    cin >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "Average number is: " << average << endl;

    return 0;
}
