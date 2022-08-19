#include <bits/stdc++.h>

using namespace std;

int main(){

    
    stack <int> stk;
    int n;
    long long raised;
    int arr[4];
    cin >> n;
    int first_d , second_d , third_d, fourth_d;
    first_d = n % 10000 / 1000;
    second_d = (n% 1000) / 100;
    third_d =  (n% 100) / 10;
    fourth_d = n % 10;
    arr[0] = second_d;
    arr[1] = fourth_d;
    arr[2] = third_d;
    arr[3] = first_d;
    int shuffled = 0;
    for(int i = 0 ; i < 4; i++)
    {   
        shuffled *= 10;
        shuffled += arr[i];
    }
    cout << shuffled << endl;
    //raise to fourth power
    raised = pow(shuffled, 4);
    cout << raised << endl;
    int times = 6 ;
    int remainder ;
    int ans[6];
    int index = 5;
    while(times --)
    {
        remainder = raised % 10;
        ans[index] = remainder;
        raised /= 10;
        index --;
    }
    for(int j = 0 ; j < 6; j++)
    {
        cout << ans[j];
    }
    



}
