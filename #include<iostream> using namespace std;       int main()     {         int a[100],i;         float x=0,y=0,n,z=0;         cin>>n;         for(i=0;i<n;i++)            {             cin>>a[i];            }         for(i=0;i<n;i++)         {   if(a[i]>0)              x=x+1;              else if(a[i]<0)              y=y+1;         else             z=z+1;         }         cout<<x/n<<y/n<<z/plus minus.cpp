#include<iostream>
using namespace std;


    int main()
    {
        int a[100],i;
        float x=0,y=0,n,z=0;
        cin>>n;
        for(i=0;i<n;i++)
           {
            cin>>a[i];
           }
        for(i=0;i<n;i++)
        {   if(a[i]>0)
             x=x+1;
             else if(a[i]<0)
             y=y+1;
        else
            z=z+1;
        }
        cout<<x/n<<y/n<<z/n;
    }
