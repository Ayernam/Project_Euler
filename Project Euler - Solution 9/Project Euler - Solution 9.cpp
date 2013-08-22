#include<iostream>
#include<cmath>
using namespace std;
long long prod;
int main(){
    for(double a=1;a<1000;a++){
        for(double b=1;b<1000;b++){
            for(double c=1;c<1000;c++){
                if(pow(a,2)+pow(b,2)==pow(c,2) && a+b+c==1000){
                    prod=a*b*c;
                    cout << prod << endl;
                    return 0;
                }
                if(pow(a,2)+pow(b,2)<pow(c,2)){
                    break;
                }
            }
        }
    }
}
