#include<iostream>
#include<list>
#include<iterator>
#include <algorithm>
using namespace std;
class Personne{
    public:
    string nom;
    string prenom;
    int age;
    void affiche(){
        cout << "Nom: "<<nom << "\t";
        cout << "Prenom : "<< prenom <<"\t";
        cout << "Age : "<< age << "\t" <<endl;
    }   
};


int main(){
list <Personne> l1; 
list <Personne>:: iterator it;
for (int i = 0; i < 2; ++i) {
    Personne per;
    cout << "Enter le nom: "<<endl;
    cin >> per.nom;
    cout << "Enter le prenom: "<<endl;
    cin >> per.prenom;
    cout << "Enter l'age': "<<endl;
    cin >> per.age;
    l1.push_back(per);
    }
    it = l1.begin();
    while(it != l1.end()) {
        it->affiche();
        it++;
  }
  
 
    return 0;
    }
   