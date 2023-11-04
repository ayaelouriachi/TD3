#include <iostream>

using namespace std;

class Complix {
private:
    double reel, img;

public:
    Complix(double, double);
    void operator+(Complix&);
    void operator-(Complix&);
    void operator*(Complix&);
    void operator/(Complix&);
};

Complix::Complix(double reel, double img) {
    this->reel = reel;
    this->img = img;
}

void Complix::operator+(Complix &autre) {
    double m = reel + autre.reel;
    double n = img + autre.img;
    cout << m << " + " << n << "i" << endl;
}

void Complix::operator-(Complix &autre) {
    double m = reel - autre.reel;
    double n = img - autre.img;
    cout << m << " - " << n << "i" << endl;
}

void Complix::operator*(Complix &autre) {
    double m = (reel * autre.reel) - (img * autre.img);
    double n = (reel * autre.img) + (img * autre.reel);
    cout << m << " + " << n << "i" << endl;
}

void Complix::operator/(Complix &autre) {
    double s = (autre.reel * autre.reel) + (autre.img * autre.img);
    double m = ((reel * autre.reel) + (img * autre.img)) / s;
    double n = ((img * autre.reel) - (reel * autre.img)) / s;
    cout << m << " + " << n << "i" << endl;
}

int main() {
    int choix;
    double a, b, c, d;

    cout << "Entrer la partie réelle du nombre complexe 1 : ";
    cin >> a;
    cout << "Entrer la partie imaginaire du nombre complexe 1 : ";
    cin >> b;
    cout << "Entrer la partie réelle du nombre complexe 2 : ";
    cin >> c;
    cout << "Entrer la partie imaginaire du nombre complexe 2 : ";
    cin >> d;

    Complix a1(a, b);
    Complix a2(c, d);

    do {
        cout << "1- Addition" << endl;
        cout << "2- Soustraction" << endl;
        cout << "3- Multiplication" << endl;
        cout << "4- Division" << endl;
        cout << "Entrer votre choix : ";
        cin >> choix;
    } while (choix < 1 || choix > 4);

    switch (choix) {
    case 1:
        a1 + a2;
        break;
    case 2:
        a1 - a2;
        break;
    case 3:
        a1 * a2;
        break;
    case 4:
        a1 / a2;
        break;
    default:
        cout << "Erreur" << endl;
    }

    return 0;
}
