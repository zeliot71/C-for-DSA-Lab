#include<iostream>
using namespace std;


void swaap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void sortA(int a[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        for(int j=0;j<n-2;j+=2)
        {
            if(a[j] > a[j+2])
            {
                swaap(a[j],a[j+2]);
            }
        }
    }
}
void sortD(int a[],int n)
{
    for(int i=1;i<n-2;i+=2)
    {
        for(int j=1;j<n-2;j+=2)
        {
            if(a[j] < a[j+2])
            {
                swaap(a[j],a[j+2]);
            }
        }
    }
}

int main()
{
    int a[]={16,17,4,18,1,20,5,12};
    int n =sizeof(a)/sizeof(a[0]);


    sortA(a,n);
    sortD(a,n);


    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}
