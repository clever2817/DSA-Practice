#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bonesPeople, bloodPeople, bonesTreats, bloodTreats;

    cin >> bonesPeople >> bloodPeople >> bonesTreats >> bloodTreats;


    int totalTreats = (bonesPeople * bonesTreats) + (bloodPeople * bloodTreats);

    cout << totalTreats << "\n";

    return 0;
}
