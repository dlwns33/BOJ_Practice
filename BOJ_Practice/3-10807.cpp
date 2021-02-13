#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int much;
    cin >> much;
    
    vector<int> v;
    
    for(int i=0; i<much; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    int look;
    cin >> look;
    
    int cnt = 0;
    
    for(int i=0; i<much; i++)
    {
        if(v[i] == look)
        {
            cnt++;
        }
    }
    
    cout << cnt;
}
 
