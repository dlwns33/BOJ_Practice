#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int check[26];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a,b;
    cin >> a >> b;
    
    int cnt = 0;
    
    for(auto idx: a)
    {
        check[idx-'a']++;
    }
    for(auto idx: b)
    {
        check[idx-'a']--;
    }
        
    for(int i=0; i < 26; i++)
    {
        if(check[i] != 0)
        {
            cnt += abs(check[i]);
        }
    }
        
    cout << cnt;
        
    
}
    
    
 
