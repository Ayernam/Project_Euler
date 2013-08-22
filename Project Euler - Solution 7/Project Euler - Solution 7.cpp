#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n);
int c, num=0;
int main(){
    while(c<=10001){
        if(prime(num)){
            c+=1;
        }
        num+=1;
    }
    cout << num;
}
bool prime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return(false);
		}
	}
	return(true);
}
