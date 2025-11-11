#include <fstream>
using namespace std;

int main() {
    ifstream fin("SOURCE.TXT");
    ofstream fout("TARGET.TXT");

    char ch;
    while (fin.get(ch))
        fout.put(ch);

    fin.close();
    fout.close();
    return 0;
}
