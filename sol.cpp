#include <bits/stdc++.h> 

using namespace std;
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
  	cin >> a[i];
  }                         
  int cnt = 0;
  for (int i = 0; i < n; i++) {
  	// check if the time required to read is > 0 (seconds)
  	// available time for each day = 86400 - a[i] (for all 'i')
  	// keep subtracting the available time for each day
  	// increment the counter for each day passed
  	if (t > 0) {
  		t -= (86400 - a[i]);
  		cnt++;
  	}
  }
  cout << cnt << '\n';
  return 0;
}      
