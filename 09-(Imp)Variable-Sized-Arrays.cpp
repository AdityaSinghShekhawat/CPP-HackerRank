#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int **outer = new int *[n];
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        outer[i] = new int[k];
        for (int j = 0; j < k; j++)
            cin >> outer[i][j];
    }
    int r, s;
    for (int k = 0; k < q; k++)
    {
        cin >> r >> s;
        cout << outer[r][s] << endl;
    }

    return 0;
}