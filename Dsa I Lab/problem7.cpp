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
    int a[]={1, 9, 3, 10, 4, 20, 2};
    //int a[]={3,1};
    int n= sizeof(a)/sizeof(a[0]);

    insertion_sort(a,n);

    int count=1;

    for(int i=1;i<n;i++)
    {
        //cout<<a[i]<<" ";
        if(a[i]== a[i-1]+1)
        {
            count++;
           // continue;
        }
        else{
            break;
        }

    }
    cout<<endl<<count<<endl;

return 0;
}
