
#include<iostream>

using namespace std;


void insertion_sort(string a[],int n)
{
    for(int i=1;i<n;i++)
    {
        string key =a[i];
        int j=i-1;
        while(j>=0 && (a[j].length()) >(key.length()))
        {
            a[j]=a[j+1];
            j--;
        }
        a[j+1]=key;
    }
}


int main()
{
    string a[]={"apple", "bat", "carrot", "dog"};

    insertion_sort(a,4);

    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }

}
