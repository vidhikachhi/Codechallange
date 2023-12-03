#include <iostream>
using namespace std;

int main() {
int t ;
cin>>t;
while (t--){
    int f=100,s=200,a,b;
    cin>>a>>b;
    f-=(f/100*a);
    s-=(s/100*b);
    (f<s)? cout<<"first"<<endl:(f>s)?
    cout<<"second"<<endl:cout<<"both"<<endl;
    f=s=a=b=0;
}
	return 0;
}
