#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long a,b;
    cin >> a >> b;
    
    if(a > b)
    {
        swap(a,b);
        cout << b-a-1 << "\n";
        for(long long i = b-a-1; i > 0; i--)
        {
            cout << b -i << " ";
        }
    }
    else if(a == b)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << b-a-1 << "\n";
        for(long long i = b-a-1; i > 0; i--)
        {
            cout << b -i << " ";
        }
    }
}
