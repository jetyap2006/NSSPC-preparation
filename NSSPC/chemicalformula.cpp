#include <bits/stdc++.h>

using namespace std;



int main(){
    vector <pair <string, int>> elements;
    string formula;
    cin >> formula;
    string temp = "";
    if(formula.size() > 25)
    {
        cout << "Invalid length" << endl;
        return 0;
    }
    for(int i = 0 ; i < formula.size(); i++)
    {  
         //only take characters into account
        if(formula[i] >= 65 && formula[i] <= 122)
        {   
            temp += formula[i];
        }
        //if next char is upper or end of loop
        if(formula[i+1] >= 65 && formula[i+1] <= 90 || i+1 == formula.size())
        {   
            bool avai = false;
            vector<pair<string,int>>::iterator it;
            for(it = elements.begin() ; it != elements.end() ; it++)
            {
                if(it->first == temp) avai = true;
            }
            //if elements not in map
            if(avai)
            {
                it->second ++;
            }
            else
            {
                elements.push_back(make_pair(temp, 1));
            }
            temp = "";
        }
    }
    for(int i = 0 ; i < elements.size() ; i++)
    {
        cout << elements[i].first << " ";
    }
    cout << endl;
    cout << elements.size() << endl;
}