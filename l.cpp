// Mesum
#include <iostream>
using namespace std;

class University {
public:
    const string uniName;
    string uniLoc ;

    University() : uniName("uobs"), uniLoc ("skd") {}

    void show() const {
        cout << "Const Function( uni Name ):"<<uniName<<endl;
    }

    void display() {
        cout << "Normal Function(uni location ):" <<uniLoc<< endl;
    }
};

// Teacher inherits from University 
class Teacher : public University {
};

// Student inherits from Teacher 
class Student : public Teacher {
};

// Department inherits from University
class Department : public University {
};

class AI : public Department {
};
class Cs : public Department {
};
class SE : public Department {
};

int main() {
  //  SE s1;
  const SE s1;    // when we make const obj then only const fucntion call be called, normal fun is not call cuz it can be only call by normal obj 
    s1.show();
     // s1.display(); // normal fucntion  ( 1- if we want to call this then we have to make normal obj ) 
    return 0;                //           ( 2- we can call it only if we make display as const fucntion ) 
}                           //            ( 3-  to run both fun we have to make both normal fun and call them using normal obj ) 
                            //             ( 4 - can make 2 seperate obj one for const , one for normal )                                                       )

