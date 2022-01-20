#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	      int n;
	      cin>>n;
	      int arr[n];
	      map<int,int>count;
	      for(int i=0;i<n;i++){
	            cin>>arr[i];
	            count[arr[i]]++;
	      }
	      cout<<(count[0]*(count[0]-1))/2 +(count[2]*(count[2]-1))/2<<endl;
	}
	return 0;
}
