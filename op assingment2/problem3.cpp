#include<bits/stdc++.h>
using namespace std;

class Student{

public:
    int rollNumber;
    string name;
    float marks;

    Student(int r, string n  ){
    rollNumber= r;
    name=n;


    cout << "Student 1 created with no marks "  << endl;
    }

    Student(int r, string n,float m ){
    rollNumber= r;
    name=n;
    marks=m;

    cout << "Student 2 created with marks "<< marks << "Grade: "<<Grade()<< endl;
    }

    char Grade (){

    if (marks>=90)
        return 'A';

    else if (marks>=75)
       return 'B';

    else if (marks>=70)
            return 'C';

    else if (marks>=60)
        return 'D';

    else
        return 'F';

    }

};



int main(){

Student s1(101,"Tom");
Student s2(102, "Lisa",75);
return 0;
}
