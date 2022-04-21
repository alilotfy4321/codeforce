#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void getFactors(int n){
	
	vector<ll> divisors;
	vector<ll>powers;
	
	
	for(int i=1 ; i*i<=n ;i++){
		if(n%i==0){
			
			if(i==n/i)
				divisors.push_back(i);
			else{
				divisors.push_back(i);
			    divisors.push_back(n/i);
			}
		}	
	}
	//get powers
	for(int s=0 ; s<=32 ; s++ ){
		powers.push_back((ll)pow(2,s));
	}
	//////////////	
	sort(divisors.rbegin(),divisors.rend());
	
	for(int i=0 ; i<divisors.size() ; i++ ){
		
		for(int j=1; j<powers.size() ; j++ ){
			
			ll result=(powers[j]-1)*(powers[j-1]);
			
		    	if(divisors[i]==result){
		    		
				cout<<divisors[i]<<"\n"; return ;
	    	}
		}
			
	}
	
}

void checkDivisor(){
	
}

int main(){
	
	int n;
	cin>>n;
	getFactors (n);
	
	
	system("pause");
	return 0;
}
