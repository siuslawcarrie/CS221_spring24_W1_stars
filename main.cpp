#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    string star;
    char s = ' ';
    for (x = 1; x < 5; x++) {
        string star(x, '*');
        cout <<star << s<<"\n";
    }
    return 0;
}
//cout<<star<<" "<<"\n";
