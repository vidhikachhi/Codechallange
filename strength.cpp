#include <iostream>
using namespace std;

int main() {
    int t,a,b,p,q;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>p>>q;
	    if(p%a==0&&q%b==0&&abs((q/b)-(p/a))<=1)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
