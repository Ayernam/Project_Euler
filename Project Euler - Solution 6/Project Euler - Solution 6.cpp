#include<iostream>
#include<cmath>
using namespace std;
long long sum, sq;
int main(){
    for(int i=1;i<=100;i++){
        sum+=pow(i,2);
        sq+=i;
    }
    sq=pow(sq,2)+1;
    cout << sq-sum;
}
