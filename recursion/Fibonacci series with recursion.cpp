#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n<=1){
       return n;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    int n;
    cin>>n;
    for (int x = 0; x <=n; x++)
    cout << fibonacci(x) << " ";
    cout << endl;
    return 0;
}
