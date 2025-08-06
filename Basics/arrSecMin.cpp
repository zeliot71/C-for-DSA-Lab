#include<iostream>
using namespace std;

int main()
{
    int n,i,j,fMin=0,secMin=0,index;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];

    if(n>=2){

    cout<<"Enter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
     if(i==0)
            fMin = arr[0];


    if(arr[i]<fMin)
    {
        fMin = arr[i];
        index =i;
    }

    }

    for(j=0;j<n;j++)
    {
        if(j==0)
            fMin=arr[0];

        if(fMin<arr[i]&& j!=index)
            secMin=arr[i];


    }
    cout<<"First min = "<<fMin<<"Second Min = "<<secMin;
    }
    else{
        cout<<"Array size must 2 or greater!";
    }

    return 0;
}
