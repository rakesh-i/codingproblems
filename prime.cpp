#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int flag=1;
    for(int i=2;i<x; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                flag = 0;
                break;
            }
            
        }
        if(flag==1){
            printf("%d\n", i);
        }
        flag = 1;
        
    }
}
