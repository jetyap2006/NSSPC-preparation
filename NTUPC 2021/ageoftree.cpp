#include <bits/stdc++.h>

using namespace std;

bool isInt(string s)
{
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(!isdigit(s[i])) return false;
    }
    return true;
}

int main(){

    map<string, float> growth_factor;
    growth_factor["American Beech"] = 6;
    growth_factor["Basswood"] = 3;
    growth_factor["Common Horsechestnut"] = 8;
    growth_factor["Dogwood"] = 7;
    growth_factor["European White Birch"] = 5;
    growth_factor["White Fir"] = 7.5;

    string n;
    cin >> n;
    string species;
    double dbh;
    double cir;
    double age;
    const double pi = 3.141592;
    cout << fixed << setprecision(1);
    if(isInt(n) && stoi(n) > 0)
    {   
        int num = stoi(n);
        while(num--)
        {   
            cin >> cir;
            cin.ignore();
            getline(cin, species);
            if(growth_factor.find(species) != growth_factor.end())
            {   
                if(cir <= 0)
                {
                    cout << "The circumference for "<< species <<" must be greater than 0!";
                    continue;
                }
                dbh = cir / pi;
                float gf = growth_factor.find(species)->second;
                age = dbh* gf;
                cout << species << " : " << cir << " : " << age << endl;
            }
            else
            {
                cout << "Species entered is not available!" << endl;
            }
        }
    }
    else
    {
        cout << "You must specify a positive integer number for the number of trees!" << endl;
    }
    
}