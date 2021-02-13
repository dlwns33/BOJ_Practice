#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int check[10];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;
    
    for(auto i: a)
    {
        check[i-'0']++;
    }
    
    check[9] = (check[6] + check[9] + 1)/2;
    check[6] = 0;
    
    sort(check,check+10);
    
    for(int i=10; i>0; i--)
    {
        if(check[i] != 0)
        {
            cout << check[i];
            break;
        }
    }
    
}
 
