#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c;
    cin >> a >> b >> c;
    
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    
    sort(v.begin(), v.end());
    
    if(a == b)
    {
        if(b == c)
        {
            cout << 10000 + 1000*a;
        }
        else
        {
            cout << 1000+ 100*a;
        }
    }
    else if(b == c)
    {
        cout << 1000 + 100*b;
    }
    else if(a == c)
    {
        cout << 1000 + 100*c;
    }
    else
    {
        cout << v[2]*100;
    }
    
 
}
