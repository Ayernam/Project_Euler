#include<iostream>
#include<cstring>
#include<string>
#include<sstream>
using namespace std;
int pal;
stringstream prod1;
string prod, output;
int main(){
    for(int x=100;x<1000;x++){
        for(int y=100;y<1000;y++){
            pal=1;
            prod1.str("");
            prod1 << x*y;
            prod = prod1.str();
            if(prod.size()%2==0){
                for(int i=prod.size();i>prod.size()/2;i--){
                    if((prod.substr(prod.size()-i,1)==prod.substr(i-1,1))==0){
                        pal=0;
                        break;
                    }
                }
            } else {
                pal=0;
            }
            if(pal==1){
                if(prod>output){
                    output=prod;
                }
            }
        }
    }
    cout << output;
}
