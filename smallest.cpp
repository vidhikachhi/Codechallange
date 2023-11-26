#include <iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
	while(t>=0){
	    int n,k;
	    cin>>n>>k;
	        if(k>n){
	         cout<<n<<endl;break;}
	    else if(n>k)
	    cout<<n%k<<endl;
	    else
	    cout<<0<<endl;
	    t--;
	}
	return 0;
}

