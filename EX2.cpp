#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

list<int> tri_a_bull(list<int> &maliste) {
    list<int>::iterator itr;
    for (itr = maliste.begin(); itr != maliste.end(); ++itr) {
        for(auto nextItr = next(itr);nextItr!=maliste.end();++nextItr){
        if (*itr >*nextItr) {
            swap(*itr, *nextItr);
        }
    }}
    return maliste;
}
list<int> tri_par_selection(list<int> &maliste) {
    for (auto itr = maliste.begin(); itr != prev(maliste.end()); ++itr) {
        auto minItr = itr;
        for (auto nextItr = next(itr); nextItr != maliste.end(); ++nextItr) {
            if (*nextItr < *minItr) {
                minItr = nextItr;
            }
        }
        if (minItr != itr) {
            swap(*itr, *minItr);
        }
    }
    return maliste;
}
list<int> tri_par_insertion(list<int> &maliste) {
    for (auto itr = next(maliste.begin()); itr != maliste.end(); ++itr) {
        int tmp = *itr;
        auto Itr = prev(itr);
        while (Itr != maliste.begin() && tmp < *Itr) {
            *next(Itr) = *Itr;
            Itr = prev(Itr);
        }
        *next(Itr) = tmp;
    }
    return maliste;
}


int main() {int choix;
    list<int> s{1, 6, 5, 7};
    do{cout<<"-1 tri a bull"<<endl;
    cout<<"-2 tri  par sélection  "<<endl;
    cout<<"-3 tri par insection "<<endl;
    cout<<"entrer votre choix"<<endl;
    cin>>choix;

    }while(choix<1|| choix>3);
    switch(choix){
    case 1: s = tri_a_bull(s);
     for (list<int>::iterator itr = s.begin(); itr != s.end(); ++itr) {
        cout << *itr << " ";}
    break;
    case 2: s=tri_par_selection(s);
     for (list<int>::iterator itr = s.begin(); itr != s.end(); ++itr) {
        cout << *itr << " ";}
    break;
    case 3: s=tri_par_insertion(s);
     for (list<int>::iterator itr = s.begin(); itr != s.end(); ++itr) {
        cout << *itr << " ";}
    break;
    default:cout<<"eror";
    }
    return 0;
}
