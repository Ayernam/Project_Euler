#include<iostream>
using namespace std;
int main(){
    int sum=0, it=1;
    for(int i=1; i<=4000000; i+=it){
        if(i%2==0)
            sum+=i;
        it=i-it;
    }
    cout << sum;
}
