#include "Student.h"

void Student::addStudent(){
    string studentName;
    cout << "Please input your name: ";
    getline(cin, studentName);
    if(size == max_size){
        cout << "Your list is full of students";
    }
    this->name[size++] = studentName;
}

void Student::removeStudent(){
    int idx = -1;
    cout << "Please input student's name that you want to remove: ";
    string studentName; 
    getline(cin, studentName);
    for(int i = 0; i < size;i++){
        if(this->name[i] == studentName){
            idx = i;
            break;
        }
    }
    if(idx == -1) cout << "No such student found" << endl;
    else{
        int i = size - idx;
        int j = idx;
        while(i--){
            this->name[j] = this->name[j+1];
            j++;
        }
        size--;
    }
}
void Student::printListedStudent(){
    cout << "List of students" << endl;
    for(int i = 0; i < size; i++){
        cout << i+1 << ". " << this->name[i] << endl;
    }
}

void Student::run(){
    while(true){
        cout << "Please choose a mode: " << endl;
        cout << "1. Add a new student" << endl;
        cout << "2. Remove a student" << endl;
        cout << "3. Print the list of students" << endl;
        cout << "4. End the program" << endl;
        int mode;
        cin >> mode;
        cin.ignore();
        if(mode == 1){
            addStudent();
        }else if(mode == 2){
            removeStudent();
        }else if(mode == 3){
            printListedStudent();
        }else if(mode == 4){
            break;
        }
    }

}