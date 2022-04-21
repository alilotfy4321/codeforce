#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>primes;
void printPrimeFactors(vector<ll>v);
void getPrimeFactors(ll n);
bool isPrime(ll n);

int main(){
	ll n;
	cin>>n;
	cout<<( isPrime(n)?"prime number. ":" Not Prime \n");
	
	return 0;
}



void getPrimeFactors(ll n){
	for(int i=2 ; i*i<=n ; i++){
		
		while(n%i==0){ //when i==1 it will out or not divisible (the number is prime)
			n/=i;
			primes.push_back(i);
		}
	}//end loop
	if(n!=1){
			primes.push_back(n);
		}
	printPrimeFactors(primes);
	
}

void printPrimeFactors(vector<ll>v){
	for(int i=0; i<v.size();i++){
		cout<<v[i]<<" ";
	}
}



 bool isPrime(ll n){
 		getPrimeFactors(n);
 		if(primes.size()==1) return true;
 		else return false;
 }






