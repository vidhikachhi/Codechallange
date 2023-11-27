#include <iostream>
using namespace std;

int main() 
{
int t ,c=0,d=0;
cin>>t;
while(t--)
{
   string n;
    cin>>n;
for(int i=0;i<n.size();i++)
 (n[i]=='0')?c++:d++;
 if(c==1||d==1)
 cout<<"yes"<<endl;
 else
 cout<<"no"<<endl;
 c=d=0;
}
	return 0;
}
