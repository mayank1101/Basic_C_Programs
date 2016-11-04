#include <iostream>
#include <math.h>
using namespace std;

int binary(int n);
int decimal(int n);
int main()
{
    int n,bin=0,i=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int res = binary(n);
    cout<<res<<endl;
    int dec = decimal(res);
    cout<<dec<<endl;

    return 0;
}

int binary(int n)
{
    int bin=0,i=1;
    while(n!=0)
    {
        int rem=n%2;
        n=n/2;
        bin = bin + rem*i;
        i = i*10;
    }
    return bin;
}

int decimal(int n)
{
    int i=0,dec=0;
    while(n)
    {
        int rem = n%10;
        n = n/10;
        dec = dec + rem*pow(2,i);
        i++;
    }
    return dec;
}
