#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r, pi;

    cin >> r;

    pi = acos(-1);

    double area = pi * r * r;

    double circumference = 2 * pi * r;

    cout << fixed << setprecision(6) << area << " " << circumference << "\n";

    return 0;
}
