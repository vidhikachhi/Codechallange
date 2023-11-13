#include <iostream>
using namespace std;

int main() {
    int t,n;
	cin>>t;
	int A1=0,A2=0,om=0,addy=0;
	while(t--)
	{
	    cin>>n;
	    int a1[n],a2[n];
	    for(int i=0;i<n;i++)
	    cin>>a1[i];
        for(int i=0;i<n;i++)
	    cin>>a2[i];
	
	
for(int i=0;i<n;i++)
	   { if(a1[i]>0){
	    A1++;
	    if(om<A1)
	    om=A1;}
	    else
        A1=0;
	    
	   }
	    
for(int i=0;i<n;i++){
	    
	    if(a2[i]>0){
	    A2++;
	    if(addy<A2)
	    addy=A2;}
	    else A2=0;}
	
	    if (om>addy)cout<<"Om";
	    else if(addy>om) cout<<"Addy";
	    else cout<<"draw";
	   
	    cout<<endl;
	}
	return 0;

}