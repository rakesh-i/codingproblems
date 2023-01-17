#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    int a[5]={0}, b[5];
    int carry=1;
    
    for(int i=0; i<=4; i++){
        scanf("%d", &a[i]);
    }
    
    for(int j=0; j<=4; j++){
        if(a[j]==1){
            b[j] = 0;
        }
        else{
            b[j] = 1;
        }
    }

    for(int l=0; l<5; l++){
        cout<<b[l]<<" ";
    }
    cout<<endl;

    for(int k=4; k>=0; k--){
        if(b[k]==0&&carry==1){
            b[k] = 1;
            carry=0;
        }
        else if(b[k]==0&&carry==0){
            b[k] = 0;
        }
        else if(b[k]==1&&carry==1){
            b[k] = 0;
            carry = 1;
        }
        else{
            b[k] = 1;
            carry = 0;
        }
    }


    for(int l=0; l<5; l++){
        cout<<b[l]<<" ";
    }
    cout<<endl;

}
