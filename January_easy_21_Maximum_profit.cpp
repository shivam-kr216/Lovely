#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int sum=0, index=0;
		int n, k; 
		cin>>n>>k;
		set<int, greater<int> > s;
		for(int i=0; i<n; i++) {
			int a; 
			cin>>a;
			s.insert(a);
		}
		for (auto it = s.begin(); it != s.end(); it++) {
			sum+=*it;
			++index;
			if(index==k){
				cout<<index<<endl;
				break;
			}
		}
		cout<<sum<<endl;

	}
	return 0;
}