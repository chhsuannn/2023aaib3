/// week10-2.cpp �m�� class

#include <iostream>
using namespace std;

/// ��Jclass Cat �A�[�j�A���ACodeBlock
class Mouse{
public:
    void print(){
        cout << "I am a mouse, mou mou\n";
    }
};

class Cat{
public:
    void print(){
        cout << "I am a Cat, meow meow\n";
    }
};

int  main(){
    Mouse mouse1, mouse2;
    Cat cat1,cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
    }
