#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
using namespace std;

void tobin(int x){
    int a = abs(x);
    int count=0, q = a, r, b[32]={0};
    while(q>1){
        q = a/2;
        r = a%2;
        a = q;
        if(r==1){
            b[count] = 1;
        }
        else{
            b[count] = 0;
        }
        count++;
    }
    b[count] = 1;
    b[31] = (x>0)?0:1;
    for(int i=31; i>=0; i--){
            if((i+1)%8==0){
                cout<<" ";
            }
            cout<<b[i];
    }
    cout<<endl;
}

int main()
{
    tobin(-2147483647);
}
