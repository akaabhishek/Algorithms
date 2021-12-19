                                   <---- Find the maximum sum from all possible sub-arrays of the given array ---->


#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int maxsum=INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int current_sum=0;
    for(int i=0;i<n;i++)
    {
        current_sum+=arr[i];    
        
        if(current_sum<1)
        {
            current_sum=0;
        }

        if(current_sum>maxsum)
        {
            maxsum=current_sum;
        }
    }
    cout<<maxsum;
return 0;
}
