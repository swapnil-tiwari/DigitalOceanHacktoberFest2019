#include <iostream>
using namespace std;
int partition_func(int ar[],int p,int r)
{
    int temp=0;
    int pivot=ar[r];
    int i=p-1;
    cout<<p;
    for (int j=p;j<r;j++)
        {
            if(ar[j]<=pivot)
            {

                i=i+1;
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
            temp=ar[i+1];
            ar[i+1]=ar[r];
            ar[r]=temp;
            return (i+1);


}
void quicksort(int ar[],int p, int r)
{
    int q;

    if (p<r)
    {
         q=partition_func(ar,p,r);
        quicksort(ar,p,q-1);
        quicksort(ar,q+1,r);
    }

}

int main()
 {
     int n;
     cout<<"Enter size of array: ";
     cin>>n;
     int ar[n];
     cout<<endl<<"Enter elements: ";
         for (int i=0;i<n;i++)
         {
             cin>>ar[i];
         }
         cout<<endl<<"SORTING...";
         quicksort(ar,0,n-1);
         cout<<endl<<"Sorted array is: ";
         for (int i=0;i<n;i++)
         {
             cout<<ar[i]<<'\t';
         }

         //cout<<endl<<"Count: "<<count;
 }

