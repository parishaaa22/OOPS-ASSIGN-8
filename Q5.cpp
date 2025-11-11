#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cin.getline(str, 100);

    int len = strlen(str);
    cout << "Length = " << len << endl;

    ofstream fout("DATA.TXT");
    fout << str;
    fout.close();

    ifstream fin("DATA.TXT");
    char ch;
    while (fin.get(ch))
        cout << ch;
    fin.close();

    return 0;
}
