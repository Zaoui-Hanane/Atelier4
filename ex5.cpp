#include<iostream>
#include <iterator>
#include <set>
using namespace std;
set<int, greater<int> >::iterator itr;
bool recherche(set<int, greater<int> > s1, int num){
    int b=0;
    for (itr = s1.begin(); itr != s1.end(); itr++) {
        if (*itr == num){
           return 0; 
        }else{
            return 1;
            }
    }
};
template<class T> set<T, greater<T> >::iterator itr;
bool recherche(set<T, greater<T> > s1, T num){
    for (itr = s1.begin(); itr != s1.end(); itr++) {
        if (*itr == num){
           return 0; 
        }else{
            return 1;
            }
    }
};

int main(){
    set<int, greater<int> > s1;
    for (int i = 0; i<100; i++) {
        s1.insert(i+1);
    }
    
    
    
    cout << recherche(s1,16) << endl;
}