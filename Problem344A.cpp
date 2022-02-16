#include<iostream>
using namespace std;

int main()
{
        int a,b,c,d,e,n;
        cin>>n;
        d=0;
        int arr[n];
        for( int k=0;k<n;k++)
        {
            cin>>arr[k];
        }
        for(int i=0;i<n-1;i++)
        {
            c=arr[i+1]-arr[i];
            if(c!=0)
            {      
                d++;
            }

        }
        cout<<d+1;




return 0;
}