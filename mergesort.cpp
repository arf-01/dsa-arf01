#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&a,int l,int m,int h)
{
    int i=l;
    int j=m+1;
    int t=l;
    while(i <= m && j <= h)
    {
        if(a[i]<=a[j])
        {
            a[t]=a[i];
            i++;
            t++;
        }
        else
        {
            a[t]=a[j];
            j++;
            t++;
        }
    }

    while(i<=m)
    {
        a[t]=a[i];
        i++;
        t++;
    }
    while(j<=h)
    {
        a[t]=a[j];
        j++;
        t++;
    }

}

 void mergesort(int a[],int l,int h)
{
    if(l<h)
    {

        int m=(l+h)/2;
         mergesort(a,l,m);
         mergesort(a,m+1,h);

         merg(a,l,m,h);
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
