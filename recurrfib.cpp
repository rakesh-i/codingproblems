#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) +fib (n-2);
}

int main()
{   
    int x = 9;
    for(int i=1; i<=x; i++){
        cout<<fib(i)<<" ";
    }

}
