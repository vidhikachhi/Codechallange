include <iostream>
using namespace std;
int main() {
      int t;
      cin >> t;
      while(t--)
      {
          int n;
          cin >> n;
          string s;
          cin >> s;
          int alice_marks=0;
          int bob_marks=0;
          if(s[0]=='A') 
              alice_marks++;
              for(int i=0;i<n;i++)
              {
                  if(s[i]=='A'&&s[i+1]=='A')
                  {
                      alice_marks++;
                 }
               else if(s[i]=='B'&&s[i+1]=='B')
                  {
                      bob_marks++;
                  }
                  else continue;
              }
  cout << alice_marks<< " " << bob_marks << endl;

      }
	return 0;
}