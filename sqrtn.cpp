#include <iostream>

int sqrt(long long int n)
{
    int low = 1;
    int high = n; int m;
    while (low <= high)
    {
        m=(low+high)/2;
        if(m*m==n)return m;
        else if(m*m>n){
            high=m-1;
        }
        else {
            low=m+1;
        }
    }
    return m-1;
}
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    cout << sqrt(n);
    return 0;
}