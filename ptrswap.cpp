//swap 2 numbers using pointers

#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
using namespace std;

void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int a=10, b=20;
    printf("before swap a:%d b:%d\n", a, b);
    swap(&a, &b);
    printf("After swap a:%d b:%d\n", a, b);

}
