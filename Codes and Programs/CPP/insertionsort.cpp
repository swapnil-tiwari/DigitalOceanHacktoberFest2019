#include <iostream>
using namespace std;
 int insertion_sort(int ar[],int n)
 {
     int i,j,key,count=0;
     for (int j=1;j<n;j++)
     {
         count++;
         key=ar[j];
         i=j-1;
         while(i>=0&&ar[i]>key)
         {
             count++;
             ar[i+1]=ar[i];
             i=i-1;
         }
         ar[i+1]=key;


     }
     return count;
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
         int count=insertion_sort(ar,n);
         cout<<endl<<"Sorted array is: ";
         for (int i=0;i<n;i++)
         {
             cout<<ar[i]<<'\t';
         }

         cout<<endl<<"Count: "<<count;
 }
