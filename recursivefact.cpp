// solve the equation f(x) = x-x^3/3!+x^5/5!-x^7/7!......
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
using namespace std;

int fact(int n){
    if(n<=1){
        return 1 ;
    }
    
    return n *= fact(n-1);
 
}

float exp(int x, int n){
    int mul=1;
    for(int i=0; i<n; i++){
        mul *= x ;
    }
    return mul;
}

float func(int x, int n){
    if(n==0){
        return(0.0);
    }
    float sum=0;
    int flag = 0, count=0;
    for(int i=1;count<n; i+=2){
        if(flag==0){
            sum += exp(x, i)/(fact(i));
            flag = 1;
        }
        else{
            sum -= exp(x, i)/(fact(i));
            flag = 0;
        }
        count++;
    }
    return sum;
    

}

int main()
{   
    float x, result;
    result = func(1, 3);
    printf("%f ", result);
}
