#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
using namespace std;

char cap(char x){
    return(x-32);
}

int main()
{   
    char a[] = "hello how are you";
    int i=0;
    while(a[i]!='\0'){
        if(a[i]==' '){
            putchar(a[i]);
        }
        else{
            cout<<cap(a[i]);
        }
        i++;
    }
  cout<<endl;
}
