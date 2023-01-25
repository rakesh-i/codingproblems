//passing function through pointers
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
using namespace std;

int mul(int *a, int *b){
    return(*a * *b);
}

int add(int(*p)(int*, int*), int* x){
    int value = (*p)(x, x);
    return(value+*x);

} 

int main()
{
    int a = 5, b = 10, result;
    int (*p)(int*, int*);
    p = mul;
    result = add(mul, &b);
    cout<<result;
}
