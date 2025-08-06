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
    /*int a[]={6,5,1,3,4};*/
    int a[]={7,9,1,8,2};
    int k;
    insertion_sort(a,5);

    cout<<"Enter the value of k: ";
    cin>>k;

    cout<<"The k'th value is: "<<a[k-1]<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

}

