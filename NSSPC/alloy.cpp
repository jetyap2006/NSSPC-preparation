#include <bits/stdc++.h>

using namespace std;

int main(){

    double dx, dy;
    double v, w;
    cin >> dx >> dy >> w >> v;
    double p1 = (w-(dy * v)) / (dx*v - dy*v);
    p1 *= 100.00;
    double p2 = 100.00 - p1;
    if(p1 < 0 || p1 > 100)
    {
        cout << "Invalid Input";
    }
    else
    {
        cout << fixed << setprecision(2);
        cout << p1 << " " << p2;
    }
}