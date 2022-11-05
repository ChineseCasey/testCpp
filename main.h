//
// Created by Casey on 2022/9/27.
//

#include <iostream>
#include <string>

using namespace std;

class cxObject{};

namespace cx{
    class Hello: public cxObject
    {
    public:
        string hh = "Hello World";
        void hello() const;
        virtual void world(int a, int b);

    };
}
