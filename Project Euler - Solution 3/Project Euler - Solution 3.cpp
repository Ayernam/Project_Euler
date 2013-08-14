#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int prime, it;
    for(int i=2;i<sqrt(600851475143);i++){
        if(600851475143%i==0){
            for(int n=2;n<=sqrt(i);n++){
                if(i%n==0){
                    it=0;
                }
            }
            if(it==0){
                it=1;
            } else {
                prime=i;
            }
        }
    }
    cout << prime;
}
