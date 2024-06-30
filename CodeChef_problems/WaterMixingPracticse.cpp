// problem link
// https://www.codechef.com/problems/WTRMIXING


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, x, y;
	    cin >> a >> b >> x >> y;

	    if(a-b > 0){
	        if(y >= abs(a-b)){
	            cout << "YES\n";
	        }else{
	            cout << "NO\n";
	        }
	    }else if(a-b == 0){
	        cout << "YES\n";
	    }
	    else{
	        if(x >= abs(a-b)){
	            cout << "YES\n";
	        }else{
	            cout << "NO\n";
	        }
	    }
	}

}
