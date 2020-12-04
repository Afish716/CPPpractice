#include "Practice3.h"
#include "Practice6.h"
int main() {
    int m=10;
    int n=99;
    int* p1=&m;
    int* p2=&n;
    practice6_10(p1,p2);
    cout<<"m="<<m<<'\n';
    cout<<"n="<<n<<'\n';
}
