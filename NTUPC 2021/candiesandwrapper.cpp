#include <bits/stdc++.h>

using namespace std;

int main(){

    int m , n , q , p;
    cin >> m >> n >> p >> q ;
    int wrappers = 0;
    int candies = m * n;
    wrappers = m * n;
    while(wrappers >= p )
    {
        candies += wrappers / p * q;
        int remainder = wrappers % p;
        wrappers = (wrappers /p*q) + remainder;
    }
    cout << candies ;


}