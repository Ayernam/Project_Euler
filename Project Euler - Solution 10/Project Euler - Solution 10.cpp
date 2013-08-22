#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n);
long long sum=2;
int main(){
    for(int i=3;i<2000000;i+=2){
        if(prime(i)){
            sum+=i;
        }
    }
    cout << sum;
}
bool prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return(false);
		}
	}
	return(true);
}
