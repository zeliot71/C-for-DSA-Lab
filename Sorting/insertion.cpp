#include<iostream>
using namespace std;


void insertionSort(int arr[],int n)
{
    int key,i,j;

    for(i=1;i<n;i++)
    {
        key = arr[i];
        j=i-1;

        while(j>=0&& arr[j]>key)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1]=key;

    }

}


int main()
{
    int n=5;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

     cout << "Original array:" << endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }


   insertionSort(arr,n);

    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}

