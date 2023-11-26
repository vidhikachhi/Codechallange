#include <iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
	while(t>=0){
	    int n,k,m=0;
	    cin>>n;
	    cin>>k;
	        if(k>n)
	        {
	         cout<<n<<endl;
	         break;
	        }
	    else if(n>k)
	    {
	    m=n%k;
	    cout<<m<<endl;
	    }
	    else
	    cout<<0<<endl;
	    t--;
	}
	return 0;
}
