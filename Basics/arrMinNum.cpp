#include<iostream>
using namespace std;

int main(){

int arr[7],i,min=0;

cout<<"Enter the array elements: ";
for(i=0;i<5;i++)
{

    cin>>arr[i];

    if(i==0)
        min =arr[0];

    if(arr[i]<min)
        min = arr[i];
}

cout<<"Min elements of array is: "<<min;
return 0;
}
