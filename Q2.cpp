#include <iostream>
#include <fstream>
using namespace std;

void countAlphabets() {
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;

    while (fin.get(ch)) {
        if (isalpha(ch))
            count++;
    }

    fin.close();
    cout << "Total alphabets = " << count << endl;
}

int main() {
    countAlphabets();
    return 0;
}
