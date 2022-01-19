#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}

class C {
public:
  int x;
};

void test() {
  C *pc = 0;
  int k = pc->x; // warn
}