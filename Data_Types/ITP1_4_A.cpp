#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int quotientInt = a / b;

    int remainder = a % b;

    double quotientDouble = (double) a / b;

    cout << quotientInt << " " << remainder << " " << fixed << setprecision(6) << quotientDouble << "\n";

    return 0;
}
