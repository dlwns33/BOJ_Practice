#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int check[26];
        fill(check, check+26, 0);
        string checking = "Possible\n";
        string a,b;
        cin >> a >> b;
    
        checking = "Possible\n";
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
                checking = "Impossible\n";
                break;
            }
        }
        
        cout << checking;
        
    }
}
    
    
 
