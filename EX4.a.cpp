#include <iostream>
#include<set>
#include<vector>
using namespace std;

bool recherche(set<int>::iterator begin, set<int>::iterator end, int number) {
    for (set<int>::iterator it = begin; it != end; ++it) {
        if (*it == number) {
            return true;
        }
    }
    return false;
}


int main() {
    set<int>s;
for(int i=0;i<100;i++){
s.insert(i);}
int number_research=89;
if(recherche(s.begin(),s.end(),number_research)==true){
    cout<<"le nombre est existe";}
else{
    cout<<"le nombre n'exist pas";
}
    return 0;
}
