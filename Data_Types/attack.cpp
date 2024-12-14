#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, result;

    cin >> a >> b;

    if (a % b == 0)
    {
        result = a / b;
    }

    else
    {
        result = (a / b) + 1;
    }

    cout << result << "\n";

    return 0;
}
