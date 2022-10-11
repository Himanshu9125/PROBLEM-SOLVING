#include <iostream>
using namespace std;
int main()
{
    int n, a[(n - 1)], i, j=0;
    cin >> n;
    for (int i = 0; i < (n - 1); i++)
    {
        cin >> a[i];
    }
     j=j^a[(n-1)];
     cout<<j;

    return 0;
}