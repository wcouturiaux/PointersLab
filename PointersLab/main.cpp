//
//  main.cpp
//  PointersLab
//
//  Created by William Couturiaux on 3/17/19.
//  Copyright © 2019 William Couturiaux. All rights reserved.
//

#include <iostream>
#include "string"

using namespace std;

void passByValue(int);
void passByRef(int &num1);


class Person{
    string name;
    int age, height, weight;
public:
    Person(string nam, int a, int h, int w){
        name = nam;
        age = a;
        height = h;
        weight = w;
    }
    
    void setName(string nam){
        name = nam;
    }
    
    void speak(){
        cout<<"Name "<<name<<", Age: "<<age<<", Height(in): "<<height<<", Weight: "<<weight<<endl;
    }
};

void ModifyPerson(Person p);

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
    
    Person p("Bob", 42, 68, 195);
    p.speak();
    ModifyPerson(p);
    p.speak();
    
    
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

void ModifyPerson(Person p){
    p.setName("changed name");
}
