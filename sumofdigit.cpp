#include <iostream>
using namespace std;
int sum(int num)
{
    int ans;
    int rem;
    while (num > 9)
    {
         ans=0;
        while (num != 0)
        {

            rem = num % 10;
            num = num / 10;
            ans = ans + rem;
        }
        num = ans;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter number for  each didgit addition: ";
    cin>>n;

    cout <<"the sum of digit is : "<< sum(n);

    return 0;
}

//Here output will be = 7