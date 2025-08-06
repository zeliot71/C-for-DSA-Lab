#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
    for(int i =1; i<n;i++)
    {
        int key =a[i];
        j=i-1;

        while(j>=0&& a[j]>key)
        {
            a[j]=key;
            j--;
        }
    }
}

int main()
{

}
