#include <bits/stdc++.h>

bool isChar(char x)
{
    if(x == 39) return true;
    if(x >= 65 && x<= 90) return true;
    return false;
}

using namespace std;

int main(){
    //all non alphabets are ignored except '
    set <string> set1; // set automatically arranges the elements
    string s;
    string temp = "";
    getline(cin, s);
    s += " ";
    for(int i = 0 ; i < s.size() ; i ++)
    {   
        if(!isspace(s[i]))
        {
            if(s[i] >= 65 && s[i] <= 122)
            {   
                s[i] = toupper(s[i]);
                temp += s[i];
            }
            else if( s[i] == 39)
            {
                temp += s[i];
            }
        }
        else
        {   
            set1.insert(temp);
            temp = "";
        }
    }
    set <string>::iterator it;
    for(it = set1.begin() ; it != set1.end(); it++)
    {
        cout << *it << endl;
    }

}