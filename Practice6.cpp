//
// Created by Guoheng on 2020/12/4.
//

#include "Practice6.h"

int practice6_7(){
    static int count=0;
    count++;
    if (count==1){
        return 0;
    } else{
        return 1;
    }
}

int practice6_10(int* x1,int* x2){
    int temp=*x1;
    *x1=*x2;
    *x2=temp;
}

bool practice6_17_1(const string& string1){
    for (auto c:string1) {
        if (isupper(c)){
            return true;
        } else{
            return false;
        }
    }
};

string practice6_17_2(string& string1){
    for (auto& c:string1) {
        if (isupper(c)){
            c=tolower(c);
        }
    }
}