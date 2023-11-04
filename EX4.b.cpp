#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename iterator, typename T>
bool recherche(iterator begin, iterator end, const T& value) {
    for (iterator it = begin; it != end; ++it) {
        if (*it == value) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<string> v1{"AYA", "salma", "soufian"};
    string x = "AYA";

    if (recherche(v1.begin(), v1.end(), x)) {
        cout << "mot existe" << endl;
    } else {
        cout << "mot n'existe pas" << endl;
    }

    list<int> l1{15, 29, 73, 44, 85};
    int num = 3;

    if (recherche(l1.begin(), l1.end(), num)) {
        cout << "nombre existe" << endl;
    } else {
        cout << "nombre n'existe pas" << endl;
    }
    float T[4]={1.3,2.5,3.9,4.4};
    float n=7.4;
     if (recherche(T,T+4, n)) {
        cout << "nombre existe" << endl;
    } else {
        cout << "nombre n'existe pas" << endl;
    }

    return 0;
}
