#include <iostream>
#include <string>
using namespace std ;

struct student {
    int roll_no;
    float cgpa;
    char name[20];
};

void addrecord (student s[],int &count ) {
cin >>s[count].roll_no;
cin >>s[count].cgpa;
cin>>s[count].name;
count++;
}

void display (student s[],int count){
for (int i=0;i<count;i++){
    cout <<"roll:" <<s[i].roll_no <<"   ";
    cout <<"cgpa:"<<s[i].cgpa <<"   ";
    cout <<"name:" <<s[i].name <<"   " <<endl;

}
}

int main (){
student s[20];
int count=0;
addrecord (s,count);
display (s,count);
}