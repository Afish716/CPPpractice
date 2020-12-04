//
// Created by Guoheng on 2020/12/2.
//

#include "Practice.h"
//输入“000”结束输入
int practice3_5(){
       string input,result;
    while (1){
        cin>>input;
        if (input!="000"){
            result+=input;
        } else{
            break;
        }
    }
    cout<<result;
};

int practice3_5_1(){
      queue<string> v1;
      string input;
      while (1){
          cin>>input;
          if (input!="000"){
              v1.push(input);
          } else{
              break;
          }
      }
      while (v1.size()!=0){
          cout<<v1.front();
          v1.pop();
          if (v1.size()!=0){
              printf(" ");
          }
      }
}

int practice3_6(){
    string string1;
    cin>>string1;
    for (int i = 0; i <string1.size() ; ++i) {
        string1[i]='X';
    }
    cout<<string1;
}

int practice3_6_1(){
    string s1;
    cin>>s1;
    for (auto &c:s1) {
        c='X';
    }
    cout<<s1;
};

int practice3_6_2(){
    string s1;
    cin>>s1;
    for (auto c:s1) {
        c='X';
    }
    cout<<s1;
};//此种写法有误

int practice3_10(){
    string string1,string2;
    cin>>string1;
    for (auto c:string1){
        if (!ispunct(c)){
            string2.append(1,c);
        }
    }
    cout<<string2;
}
