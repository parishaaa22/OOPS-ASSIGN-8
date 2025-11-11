#include <iostream>
class Test {
    float x;
public:
    Test(float v = 0.0f) : x(v) {}
    operator float() const { return x; }   // UDT -> float
};
int main() {
    Test t(4.2f);
    float f = t;        // implicit conversion to float
    std::cout << f << "\n";
}
