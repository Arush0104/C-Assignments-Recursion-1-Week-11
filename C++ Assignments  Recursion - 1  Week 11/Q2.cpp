#include <iostream>
using namespace std;

int no_of_ways(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    return no_of_ways(n - 1) + no_of_ways(n - 2) + no_of_ways(n - 3);
}
int main()
{
    int n = 5;
    cout << no_of_ways(n) << endl;
    return 0;
}