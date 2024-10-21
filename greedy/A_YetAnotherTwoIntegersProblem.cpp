#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m; 
	long long a,b,d;
	cin>>n;
	vector<int> v;
	while(n--){
		m=0;
		cin>>a>>b;
		d= abs(b-a);
		m=d/10;
		if(d%10!=0){
			m++;
		}
		v.push_back(m);
		
	}
	for(int i:v)cout<<i<<"\n";
	return 0;
}
