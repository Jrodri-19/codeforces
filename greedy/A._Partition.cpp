#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n;cin>>n;
	vector<int> v(n);
	int b=0;
	int c=0;
	for(int &t:v){
		cin>>t;
		(t>0)?(b=b+t):(c=c+t);
	}
	cout<<b-c;
	return 0;
}
