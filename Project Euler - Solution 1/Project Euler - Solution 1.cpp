#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int sum=0, n=0;
    while(n<1000){
        if(n%3==0 || n%5==0){
            sum+=n;
        }
        n++;
    }
    cout << sum << endl;
    system("PAUSE");
    return 0;
}
