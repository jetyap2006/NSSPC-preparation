#include <bits/stdc++.h>

using namespace std;

int main(){

    float s1,s2,s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    bool invalid = false;
    bool equi = false;
    bool s1h = false, s2h = false, s3h = false;
    int hyp = max(s1,max(s2,s3));
    if(hyp == s1) s1h = true;
    if(hyp == s2) s2h = true;
    if(hyp == s3) s3h = true;
    if(s1h)
    {
        if(s2 + s3 <= s1)
        {
            invalid = true;
        }
    }
    else if(s2h)
    {
        if(s1 + s3 <= s2)
        {
            invalid = true;
        }
    }
    else if(s3h)
    {
        if(s1 + s2 <= s3)
        {
            invalid = true;
        }
    }
    if(invalid)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        if(s1 == s2 && s2 == s3 && s1 == s3)
        {
            cout << "Equilateral triangle" << endl;
            equi = true;
        }
        else if(s1 == s2 || s2 == s3 || s3 == s1)
        {
            cout << "Isosceles triangle" << endl;
        }
        else
        {
            cout << "Scalene Triangle" << endl;
        }

        float s = (s1 + s2 + s3) / 2;
        float area = (sqrt(s * (s-s1) * (s-s2) * (s-s3)));
        
        cout << round(area) << endl;
    }
    

    
}