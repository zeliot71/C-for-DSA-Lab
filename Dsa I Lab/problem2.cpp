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
   // int b[]={5,2,1,4,7};
    int a[]={11,9,17,15};
     int len = sizeof(a)/sizeof(a[0]);

    insertion_sort(a,len);


    //int mid = len/2;
    if(len%2==0)
        cout<<(a[len/2-1]+a[len/2])/2.0;
    else
        cout<<a[len/2];

}
