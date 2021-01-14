#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string input[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++)
    {
        if ((i > 9) && (i % 2 == 0))
            cout << "even" << endl;
        else if ((i > 9) && (i % 2 != 0))
            cout << "odd" << endl;
        else if (i == 1)
            cout << input[0] << endl;
        else if (i == 2)
            cout << input[1] << endl;
        else if (i == 3)
            cout << input[2] << endl;
        else if (i == 4)
            cout << input[3] << endl;
        else if (i == 5)
            cout << input[4] << endl;
        else if (i == 6)
            cout << input[5] << endl;
        else if (i == 7)
            cout << input[6] << endl;
        else if (i == 8)
            cout << input[7] << endl;
        else if (i == 9)
            cout << input[8] << endl;
    }
    return 0;
}