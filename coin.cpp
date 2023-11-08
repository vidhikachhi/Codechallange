#include <iostream>
using namespace std;

int main() {
    int t;
	cin >>t;
	while(t--)
	{ 
	    int c,h;
	    cin>>c;
	    for(int i=1;i>0;i++)
	    {
	        if(c>=i)
	        {
	            c-=i;
	            h++;
	        }
	    }
	    cout<<h;
	}
	return 0;
}
