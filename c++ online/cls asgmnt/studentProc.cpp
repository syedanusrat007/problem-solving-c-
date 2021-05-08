#include <iostream>
using namespace std;

int student_id[2];
char *name[2];

void displayStudent(int num){
     cout<<"ID : " <<student_id[num]<<endl;
     cout<<"Name : "<<name[num]<<endl;
}

int main(){
    student_id[0]=15001;
    name[0]="Aditi";
    cout<<"Welcome to Student Admin Program : "<<endl;
    cin.get();
    
    displayStudent(0);
    return 0;
}
