#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah----

map<string, string> path;
int main() {
    int n = 5;
    map<char, set<char>>TemukanKoneksiPenting;

    char nodes[] = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < n; ++i) {
        TemukanKoneksiPenting[nodes[i]] = set<char>();
    }

    // Input jalur
    cout << "Jumlah n = " << n << endl;
    cout << "Output nya adalah" << endl;

    char paths[][2] = {{'A', 'B'}, {'B', 'A'}, {'B', 'C'}, {'C', 'B'}, {'D', 'E'}};
