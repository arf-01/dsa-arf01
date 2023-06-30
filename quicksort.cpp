#include<bits/stdc++.h>
using namespace std;


   int partision(int a[],int l,int h)
   {

       int pivot=a[l];

      int k=l;
      for(int i=l+1;i<=h;i++)
      {
          if(a[i]<pivot)
          {



             k=i;


          }
      }
      swap(a[k],a[l]);

      return k;


   }


  quicksort(int  a [],int l,int h)
  {

     if(l<h)
      {

         int k= partision(a,l,h);

         quicksort(a,l,k);
         quicksort(a,k+1,h);

      }


    return  0;


  }
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    quicksort(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
