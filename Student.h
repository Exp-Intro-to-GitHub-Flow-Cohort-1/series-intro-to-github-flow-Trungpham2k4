#include <bits/stdc++.h>
#pragma once 
using namespace std;

class Student{
    private:
    string name[100];
    int size;
    int max_size;
    public:
    Student(){
        size = 0;
        max_size = 100;
    }
    ~Student(){}
    public:
    void addStudent();
    void removeStudent();
    void printListedStudent();
    
    void run();
};