#include <iostream>
#include<set>
#include<vector>
using namespace std;
bool recherche(set<int>s,int number){
  if(s.find(number)!=s.end()){

    return true;
  }

    return false;
}



int main() {
    set<int>s;
for(int i=0;i<100;i++){
s.insert(i);}
int number_research=89;
if(recherche(s,number_research)==true){
    cout<<"le nombre est existe";}
else{
    cout<<"le nombre n'exist pas";
}
    return 0;
}
