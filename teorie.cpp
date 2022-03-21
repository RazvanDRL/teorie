#include <iostream>
using namespace std;

int v[100];

void citire(int n, int v[])
{
    if (n)
    {
        citire(n - 1, v), cin >> v[n]; 
    }
}

void afisare(int n, int v[])
{
    if (n)
        afisare(n - 1, v), cout << v[n];
}

int cb(int st, int dr, int x) // cautare binara
{
    if (st <= dr)
    {
        int mij = (st + dr) / 2;
        if (x == v[mij])
            return mij;
        if (x < v[mij])
            return cb(st, mij - 1, x);
        else
            return cb(mij + 1, dr, x);
    }
    return 0;
}

int main()
{

    return 0;
}
