#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("welcome.txt");

    file << "Hello Everybody";

    file.seekp(11, ios::beg);
    file << "one ";

    file.close();

    return 0;
}
