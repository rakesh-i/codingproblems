#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
using namespace std;

struct complex{
    float real;
    float img;
};

void add(complex *a, complex *b, complex **c){
    complex *temp = *c;
    temp->real = a->real+b->real;
    temp->img = a->img+b->img;

}

void subtract(complex *a, complex *b, complex **c){
    complex *temp = *c;
    temp->real = a->real-b->real;
    temp->img = a->img-b->img;

}

void mul(complex *a, complex *b, complex **c){
    complex *temp = *c;
    temp->real = a->real*b->real-a->img*b->img;
    temp->img = a->real*b->img+a->img*b->real;

}

int main()
{
    complex *c1 = new complex(); 
    complex *c2 = new complex(); 
    complex *c3 = new complex();
    c1->real = 5;
    c1->img = 3;
    c2->real = -2;
    c2->img = 4;
    mul(c1, c2, &c3);
    printf("result = %.2f+i(%.2f)", c3->real, c3->img);
}
