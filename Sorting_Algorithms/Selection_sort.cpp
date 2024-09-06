/*In selection sort, you have to find the index number of the lowest value,
    then you have to swap the values of the selected two index.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
      
        for(int i=0;i<n;i++)//first loop.
        {
            int min_index=i;//initializing i as the minimum index.

            for(int j=i;j<n;j++)//second loop.
            {
                if(arr[j]<arr[min_index])min_index=j;// if any lower value found, initialize it's index as minimum.
            }
            swap(arr[min_index],arr[i]);//swap the values of those two index. And you are ready to go.
        }
      
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
