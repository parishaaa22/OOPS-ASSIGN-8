#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    void getData() {
        cin >> roll >> marks;
    }

    void showData() {
        cout << roll << " " << marks << endl;
    }
};

int main() {
    Student s1, s2;

    s1.getData();

    // write object in binary file
    ofstream fout("STU.DAT", ios::binary);
    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    // read object from binary file
    ifstream fin("STU.DAT", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    s2.showData();

    return 0;
}
