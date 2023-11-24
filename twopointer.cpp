#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   int a[n],b[n],c=0;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
	    if(a[i]==b[j])
	    c++;
        }
        cout<<c<<endl;
	}
	return 0;
}
