#include<iostream>
#include<cmath>
using namespace std;
int lcm=1, j=2, s[21], div;
int main(){
    for(int i=1; i<=20; i++){
        s[i]=i;
    }
    while(j<20){
        for(int i=1; i<=20; i++){
            if(s[i]%j==0){
                s[i]/=j;
                div=1;
            }
        }
        if(div==1){
            lcm*=j;
            div=0;
            j--;
        }
        j++;
    }
    cout << lcm;
}
