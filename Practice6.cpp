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

int practice6_21(int x,int* ptr){
    return x>*ptr? x:*ptr;
}

int practice6_22(int* &ptr1,int* &ptr2){
    int* ptr3=ptr1;
    ptr1=ptr2;
    ptr2=ptr3;
}

int practice6_33(const vector<string>& v1,int x){
    static int size=v1.size();
    static int count=0;
    if (count==size){

    } else{
        cout<<v1[count]<<" ";
        count++;
        practice6_33(v1,count);
    }
}//const表面我不希望改变vector里面的值 &表示不希望牺牲效率来传入拷贝

string (&practice6_36_1())[10]{

}

