#include <bits/stdc++.h>
using namespace std;
int i = 0;
void rev(int n)
{
    if (n <= i)
        return;

    cout << n << " " << endl;
    n--;
    rev(n);
}

int main()
{

    int n;
    cin >> n;
    rev(n);

    return 0;
}