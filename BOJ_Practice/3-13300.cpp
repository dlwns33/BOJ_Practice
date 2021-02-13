#include<iostream>
#include<array>
#include<cmath>
using namespace std;

double check[12];
int main()
{
    int n, max;
    cin >> n >> max;
    
    int cnt = 0;
    
    for(int i=0; i<n; i++)
    {
        int gender, grade;
        cin >> gender >> grade;
        
        if(gender == 0)
        {
            if(grade == 1)
            {
                check[0]++;
            }
            else if(grade == 2)
            {
                check[1]++;
            }
            else if(grade == 3)
            {
                check[2]++;
            }
            else if(grade == 4)
            {
                check[3]++;
            }
            else if(grade == 5)
            {
                check[4]++;
            }
            else
            {
                check[5]++;
            }
        }
        else
        {
            if(grade == 1)
            {
                check[6]++;
            }
            else if(grade == 2)
            {
                check[7]++;
            }
            else if(grade == 3)
            {
                check[8]++;
            }
            else if(grade == 4)
            {
                check[9]++;
            }
            else if(grade == 5)
            {
                check[10]++;
            }
            else
            {
                check[11]++;
            }
        }
    }
    
    
    for(int i=0; i<12; i++)
    {
        check[i] = ceil(check[i]/max);
    }

    
    for(int i=0; i<12; i++)
    {
        cnt += check[i];
    }
    
    cout << cnt;
}
