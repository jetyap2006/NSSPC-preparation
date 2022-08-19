#include <bits/stdc++.h>

using namespace std;

int main(){

    string input;
    string ans;
    cin >> input;
    int duplicate = 1 ;
    while(duplicate != 0 && input.size() != 0 )
    {   
        duplicate = 0 ;
        ans = "";
        int id1, id2 = 0;
        for(int i = 0 ; i < input.size() - 1; i++)
        {
            if(input[i] == input[i+1])
            {
                id1 = i;
                while(input[id1] == input[i+1])
                {
                    i++;
                }
                id2 = i;
                for(int k = id1; k<= id2; k++)
                {
                    input[k] = '*';
                } // assign a non character
                duplicate += 1;
                break;
            }
        }
        for(int j = 0 ; j < input.size() ; j ++)
        {
            //if not character reject;
            if(input[j] >= 97 && input[j] <= 122)
            {
                ans += input[j];
            }
        }
        input = ans;
    }
    if(ans.size() != 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "Empty String" << endl;
    }
}