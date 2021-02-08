#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int sum =0;
    vector<int> v;
    
    for(int i=0; i<5; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
        sum += n;
    }
    
    sort(v.begin(), v.end());
    
    cout << sum/5 << "\n";
    cout << v[2];
}
