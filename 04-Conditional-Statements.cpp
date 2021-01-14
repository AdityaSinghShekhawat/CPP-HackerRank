#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string input[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n == 1)
        cout << input[0];
    else if (n == 2)
        cout << input[1];
    else if (n == 3)
        cout << input[2];
    else if (n == 4)
        cout << input[3];
    else if (n == 5)
        cout << input[4];
    else if (n == 6)
        cout << input[5];
    else if (n == 7)
        cout << input[6];
    else if (n == 8)
        cout << input[7];
    else if (n == 9)
        cout << input[8];
    else
        cout << "Greater than 9";

    return 0;
}
