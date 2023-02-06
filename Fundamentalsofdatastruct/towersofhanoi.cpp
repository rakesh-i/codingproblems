#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#include<stack>
#include<vector>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
#define NOT(x) (((x)<1)?1:0) 
using namespace std;

template<class T>
void hanoi(int n, T from, T to, T aux){
    if(n==0){
        return;
    }
    else{
        hanoi(n-1, from, aux, to);
        cout<<"move disk "<<n<<" from "<<from<<" to "<<to<<endl;
        hanoi(n-1, aux, to, from);
    }
}

int main()
{
    hanoi(3, 'a', 'c', 'b');
}
