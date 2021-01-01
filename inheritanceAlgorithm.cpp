//
// Created by Guoheng on 2020/12/31.
//
#include "inheritanceAlgorithm.h"
#include <vector>
#include <cstdlib>
#include <time.h>
#include <math.h>
using std::vector;
double function(double x){
    return x*x-2*x-7;
}

void getVector(vector<double>& group){
    for (int i = 0; i <100; ++i) {
        group.push_back(getRoot());
    }//添加集群完毕，完成初始化
    return;
}

void mutation(vector<double>& group,int i){
     //i是上个集群中的最优解
    for (int j = 0; j <group.size() ; ++j) {
        if (j==i){
            continue;
        } else{
            group[j]=getRoot();
        }
    }
}

int judge(const vector<double>& gruop){
    double x;
    int solution;
    double min=100000000;
    double temp_min;
    for (int i = 0; i <gruop.size() ; ++i) {
        x=gruop[i];
        temp_min=function(x);
        if (temp_min<min){
            min=temp_min;
            solution=i;
        }
    }
    return solution;//返回这个集群的最优解
}

double getRoot(){
    static int count=1;
    if (count==1){
    srand(time(NULL));
    count++;
    }
    return static_cast<double>(rand()/static_cast<double>(1000));
}
