#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    int a[10][10]={0,0};
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(j==0||i==j){
                a[i][j] = 1;
            }
            if(i>0&&j>0){
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
        }
    }

    for(int k=0; k<10; k++){
        for(int l=0; l<10; l++){
            if(k<l){
                continue;
            }
            else{
                cout<<a[k][l]<<" ";
            }
        }
        cout<<endl;
    }

}
