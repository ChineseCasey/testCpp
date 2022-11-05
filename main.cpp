
#include "main.h"


void cx::Hello::hello() const {
    cout << hh << endl;
}

void cx::Hello::world(int a, int b){
    if (a != 0 && b != 0)
    {
        cout << a+b ;
    }
};


int main() {
    //test git aaa
    cx::Hello hello;
    int number;
    number = hello.hh.size();
    hello.hello();
    hello.world(number, 1);
    return 0;
}

