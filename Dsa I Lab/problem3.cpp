#include<iostream>
#include<climits>
using namespace std;

void insertion_sort(int a[],int n)
{
    for(int i =1; i<n;i++)
    {
        int key =a[i];
        int j=i-1;

        while(j>=0&& a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int smallestDiff(int a[],int n)
{

   // return min_diff;
}
int main()
{
    //int a[]={15,7,2,12,13}; sol: 1
    int a[]={2,13,11,19,5}; //sol: 2
    //int n = sizeof(a)/sizeof(a[0]);
   // int min= smallestDiff(a,n);

   int min_diff = INT_MAX;

    insertion_sort(a,5);

    for(int i=1;i<5;i++)
    {
        int diff = a[i]-a[i-1];
        if(diff<min_diff)
        {
            min_diff=diff;
        }
    }

    cout<<"Smallest diff: "<<min_diff<<endl;

}
