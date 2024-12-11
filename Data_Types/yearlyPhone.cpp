#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    int year2 = year % 10;

    year = year / 10;

    int year1 = year % 10;

    cout << "K" << year1 << year2 << "\n";


    return 0;
}
