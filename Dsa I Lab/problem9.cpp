#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key= a[i];
       int  j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}


int main()
{
    int a[]={1,16,13,14,4};
    int b[]={15,12,5,3,7};

    int A=sizeof(a)/sizeof(a[0]);
    int B=sizeof(b)/sizeof(b[0]);

    int arr[A+B];
    //insertion_sort(a,A);
    //insertion_sort(b,B);

    for(int i=0;i<A+B;i++)
    {
        if(i<A)
        {
            arr[i]=a[i];
        }
        else
        {
            arr[i]=b[i-A];
        }
    }

    insertion_sort(arr,A+B);

    for(int i=0;i<A+B;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
