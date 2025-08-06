
#include<iostream>

using namespace std;

int absElements(int x)
{
    if(x<0)
        return -x;
    else
        return x;
}

void insertion_sort(int a[],int n)
{
    for(int i =1; i<n;i++)
    {
        int key =a[i];
        int j=i-1;

        while(j>=0&& absElements(a[j])>absElements(key))
        {

            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

    int main()
    {
        int a[]={-10, 5,-3, 7,-2};

        insertion_sort(a,5);

        for(int i =0;i<5;i++)
        {
            cout<<a[i]<<" ";
        }
    }
