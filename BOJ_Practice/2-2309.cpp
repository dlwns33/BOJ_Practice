#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int sum = 0;
    bool check = false;
    vector<int> v;
    
    for(int i=0; i<9; i++)
    {
        int n;
        cin >> n;
        sum += n;
        v.push_back(n);
    }
    
    sum -= 100;
    
    for(int a=0; a<8; a++)
    {
        for(int b=a+1; b<9; b++)
        {
            if(v[a] + v[b] == sum)
            {
                v[a] = -1;
                v[b] = -1;
                check = true;
                break;
            }
        }
        if(check)
        {
            break;
        }
    }

    sort(v.begin(), v.end());
    
    for(int i=2; i<9; i++)
    {
        
        cout << v[i] << "\n";
    }
}
