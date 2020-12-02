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
