#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> v;
    int sum = 0;
    
    for(int i=0; i<7; i++)
    {
        int n;
        cin >> n;
        if(n %2 == 1)
        {
            sum += n;
            v.push_back(n);
        }
    }
    
    sort(v.begin(), v.end());
    if(v.size() == 0)
    {
        cout << -1;
    }
    else
    {
        cout << sum << "\n";
        cout << v[0];
    }
}
