#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

struct personne {
    int age;
    string nom;
    string prenom;
};

bool comparePersonnes(const personne &a, const personne &b) {
    if (a.nom != b.nom) {
        return a.nom < b.nom;
    }
    return a.prenom < b.prenom;
}

int main() {
    list<personne> personnes;
    string nom, prenom;
    int age;

    cout << "Entrez le nom et le prenom et l'age de la personne, ou entrez 'A' pour quitter : " << endl;

    do {
        cout << "Nom : ";
        cin >> nom;
        if (nom == "A") {
            break;
        }

        cout << "Prenom : ";
        cin >> prenom;
        cout << "age : ";
        cin >> age;

        personne p;
        p.age = age;
        p.nom = nom;
        p.prenom = prenom;

        personnes.push_back(p);
    } while (true);

    personnes.sort(comparePersonnes);

    cout << "Liste triée par nom et prénom : " << endl;

    for (list<personne>::iterator itr=personnes.begin();itr!=personnes.end();++itr) {
        cout << "Nom : " << itr->nom << ", Prénom : " << itr->prenom << ", Âge : " << itr->age << endl;
    }

    return 0;
}
