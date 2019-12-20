#include "t1.h"
#include <iostream>

class TRunner {
public:
    TRunner(int a, int b) {
        std::cout << "TRunner[t1](" << a << ", " << b << ")" << std::endl;
    }

    ~TRunner() {
        std::cout << "~TRunner[t1]()" << std::endl;
    }

    void operator()(int c) {
        std::cout << "t1(" << c << ")" << std::endl;
    }
};

void RunT1() {
    std::cout << "RunT1()" << std::endl;
    TRunner(1, 2)(17);
    std::cout << "done T1" << std::endl;
}
