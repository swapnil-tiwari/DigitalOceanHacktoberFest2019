#include <iostream>
using namespace std;
int linear_search(int ar[],int first,int last,int item)
{
    if (first>last)
    {
        return -1;

    }
    else if (item==ar[first])
    {
        return first;
    }
    else {
        linear_search(ar,first+1,last,item);
    }
}
int main()
{
    int ar[10];
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl<<"Enter values of array: ";
    for (int i=0; i< n; i++)
    {

        cin>>ar[i];
    }
    cout<<endl<<"Enter item to be searched: ";
    int item;
    cin >> item;
    int res=linear_search(ar,0,n-1,item);
    if(res==-1)
    {
        cout<<endl<<"Item not found";
    }
    else{
        cout<<endl<<"Item found at: "<<res+1;
    }
}
