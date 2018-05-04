#include<iostream>
using namespace std;
int a[10],i,n,j,temp;
int main()
{
    cout<<"\nEnter size of an array : ";
    cin>>n;
    cout<<"\nInsert elements in array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    j=i-1;
    i=0;
    if(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<"Reverse of array is : ";
    for(i=0;i<n;i++)
    {
            cout<<a[i]<<"\n";
    }
}
