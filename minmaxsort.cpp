#include<bits/stdc++.h>
using namespace std;
void Swap(int & a,int & b)
{
     if(&a!=&b)
     {
      a=a+b;
      b=a-b;
      a=a-b;
     }

}
void min_max_sort(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int mn=i;
        int mx=i;
        int h=n-i-1;
        int mmx=a[i];
        for(int k=i;k<=h;k++)
        {
            if(a[k]<a[mn])
            {
                mn=k;
            }
            else if(a[k]>a[mx])
            {

                mx=k;
                mmx=a[k];
            }
        }

        Swap(a[i],a[mn]);
        if(i==mx)
        {
            Swap(a[h],a[mn]);

        }
        else
        {
            Swap(a[h],a[mx]);
        }

    }
}
int main()
{
int n;cin>>n;int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
min_max_sort(a,n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
}
