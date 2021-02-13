#include <iostream>
#include <string>
#include <array>
using namespace std;

int check[10];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    cin >> a >> b >> c;
    
    string result = to_string(a*b*c);
    
    for(auto i: result)
    {
        check[i-'0']++;
    }
    
    for(int i=0; i<10; i++)
    {
        cout << check[i] << "\n";
    }
}
 
