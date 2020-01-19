#include<iostream>
#include<math.h>
using namespace std;


    int main()
    {
        int a[100][100],n,i,j,sum=0,sum1=0;
        cin>>n;
        for(i=0;i<n;i++)
           {
            for(j=0;j<n;j++)
            {cin>>a[i][j];}
           }
        for(i=0;i<n;i++)
        {   sum=sum+a[i][i];
            sum1=sum1+a[i][n-1-i];
        }
        cout<<abs(sum-sum1);
    }
