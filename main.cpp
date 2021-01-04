#include <iostream>
#include "inheritanceAlgorithm.h"
#include <vector>
#include "TestDemo.h"
using std::cout;
using std::vector;
int main(){
   int *test=pointerDemo();
    for (int i = 0; i <10 ; ++i) {
        cout<<test[i];
    }
}

//程序完
