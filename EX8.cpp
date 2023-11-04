#include <iostream>
#include<vector>
using namespace std;
template<class T>
T carre(T &value) {
    return value*value;
}
int main() {
 int v=10;
 cout<<"le carre de ce nombre  est"<<carre(v)<<endl;  
 vector<float>v1{1.2 , 2.9 , 3.4};
vector<float>::iterator it;
for(it=v1.begin();it!=v1.end();++it){
  cout<<"le carre de ce vector est"<<carre(*it)<<endl;  }
    return 0;
}
