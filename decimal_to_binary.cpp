# include <iostream>
using namespace std;
 

void print (int binary,int originalnum){
    cout << "the binary of "<< originalnum <<" is "<< binary <<endl;
}




int decimaltobinary (int decinum){
    int original=decinum;
    int ans=0 , pow=1;

    while(decinum>0){
        int rem=decinum%2;   
        ans+= (rem * pow);
        pow*=10;
        decinum/=2;
    }

    print (ans,original);
    return ans;
}
 
int main (){

   decimaltobinary(69);
    return 0;
}