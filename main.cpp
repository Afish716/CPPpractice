#include <iostream>
#include "inheritanceAlgorithm.h"
#include <vector>
using std::cout;
using std::vector;
int main(){
    vector<double> v1;
    getVector(v1);
    int x=judge(v1);
    for (int i = 0; i <1000 ; ++i) {
        mutation(v1,x);
        x=judge(v1);
    }
    printf("%f\n",v1[x]);
    printf("%f",function(v1[x]));
}

//程序完
