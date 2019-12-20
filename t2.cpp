#include "t2.h"
#include <iostream>

using namespace std::literals;

class TRunner {
public:
    TRunner(std::string a, std::string b) {
        std::cout << "TRunner[t2](" << a << ", " << b << ")" << std::endl;
    }

    ~TRunner() {
        std::cout << "~TRunner[t2]()" << std::endl;
    }

    void operator()(int c) {
        std::cout << "t2(" << c << ")" << std::endl;
    }
};

void RunT2() {
    std::cout << "RunT2()" << std::endl;
    TRunner("first"s, "second"s)(27);
    std::cout << "done T2" << std::endl;
}
