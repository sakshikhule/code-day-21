#include<iostream>
using namespace std;
int main()
{
    int n,rev,a,b;
    cout<<"enter any no. = ";
    cin>>n;
    b=n;
    while(n>0)
    {
      a=n%10;
      rev=rev*10+a;
      n=n/10;
    }
    if(rev==b)
    {
        cout<<"number is palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    return 0;
}
