#include <iostream>
class Test {
    float x;
public:
    Test(float v = 0.0f) : x(v) {}     // converting constructor
    void show() const { std::cout << x << "\n"; }
};
int main() {
    float f = 3.5f;
    Test t = f;        // float -> Test
    t.show();
}
