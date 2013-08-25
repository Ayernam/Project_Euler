#include<iostream>
#include<cmath>
using namespace std;
int trinum, c;
int divtest(int n);
int main(){
    while(1){
        trinum+=++c;
        if(divtest(trinum)>500){
            cout << trinum;
            break;
        }
    }
}
int divtest(int n){
    int divs=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            divs+=2;
        }
    }
    return divs;
}
