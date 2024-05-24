#include <iostream>
using namespace std;

bool check(int n)
{
    if(n==1) return true;

    if(n%2==0 && check(n/2)) return true;
    
    else return false;


}
int main()
{
    int n = 17;
    check(n);
    if(check(n)) cout<<"True";
    else cout<<"False";
}