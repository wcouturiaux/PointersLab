//
//  main.cpp
//  PointersLab
//
//  Created by William Couturiaux on 3/17/19.
//  Copyright © 2019 William Couturiaux. All rights reserved.
//

#include <iostream>
using namespace std;

void passByValue(int);
void passByRef(int &num1);

int main(int argc, const char * argv[]) {
    // insert code here...
    int num, num1;
    int* pNum = &num;
    num1=3;
    *pNum = 5;
    passByValue(num1);
    cout<<"In Main"<<endl;
    cout<<num1<<endl;
    passByRef(*pNum);
    cout<<"In Main"<<endl;
    cout<<*pNum<<endl;
    passByValue(*pNum);
    cout<<"InMain"<<endl;
    cout<<*pNum<<endl;
    
    
    return 0;
}

void passByValue(int num1){
    cout<<"In Pass By Value"<<endl;
    num1++;
    cout<<num1<<endl;
}

void passByRef(int &num1){
    cout<<"In Pass By Ref"<<endl;
    num1=50;
    cout<<num1<<endl;
}
