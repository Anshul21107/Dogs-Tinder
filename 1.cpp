#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
int n;
    cin>>n;
    int arr[n];
    int count=0,max=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(max<count)
        {
            max=count;
        }
        count=0;
    }
    cout<<max;
	}
	return 0;
}
