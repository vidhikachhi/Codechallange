#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1;
        string str2;
        cin >> str1 >> str2;
        int size = str1.size();
        bool flag = false;
        for (int i = 0; i < size; i++) {
            if ((str1[i] == '?' && str2[i] != '?') ||
                (str1[i] != '?' && str2[i] == '?') ||
                (str1[i] == str2[i]) ||
                (str1[i] == '?' && str2[i] == '?')){
                flag = true;
                break;
            }
        }
        if (flag == true) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
	
