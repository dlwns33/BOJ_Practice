#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int j =0; j <3; j++)
    {
        int cnt =0;
        for(int i=0; i<4; i++)
        {
            int n;
            cin >> n;
            if(n == 0)
            {
                cnt++;
            }
        }
        
        if(cnt == 0)
        {
            cout << 'E' << "\n";
        }
        else if(cnt == 1)
        {
            cout << 'A' << "\n";
        }
        else if(cnt == 2)
        {
            cout << 'B' << "\n";
        }
        else if(cnt == 3)
        {
            cout << 'C' << "\n";
        }
        else
        {
            cout << 'D' << "\n";
        }
    }
    
    

}
