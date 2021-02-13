#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int freq[26];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string word;
    cin >> word;
    
    for(auto c : word)
    {
        freq[c-'a']++;
    }
    
    for(int i=0; i<26; i++)
    {
        cout << freq[i] <<" ";
    }
}

