#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char a[] = "tenet" , b[20], c[20];
    int i = strlen(a)-1, j=0, flag = 0;
    while(i>j){
        if(a[j]==a[i]){
            cout<<a[j]<<a[i]<<" "<<i<<j<<endl;
            i--;
            j++;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout<<"no";
    }
    else{
        cout<<"yes";
    }
 }   
