#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Number N";
    cin >> N;
    int x = 1;
    int sum = 0;
    while (x <= N)
    {
        sum = sum + x;
        x = x + 1;
    }
    cout << sum;
    return 0;
}