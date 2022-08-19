#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x)
{   
    if(x == 1) return false;
    for(int i = 2 ; i <= sqrt(x) ; i++)
    {
        if(x % i == 0) return false;
    }
    return true;
}
int main(){

    string s;
    int sum = 0;
    getline(cin ,s);
    if(s.size() > 100)
    {
        cout << "Invalid Length" << endl;
        return 0;
    } 
    for(int i = 0 ; i < s.size() ; i ++)
    {
        if(!isspace(s[i]) && s[i] >= 65 && s[i] <= 122)
        {
            s[i] = tolower(s[i]);
            int index = s[i] - 96;
            if(isPrime(index)) sum += index;
        }
    }
    cout << sum << endl;
}