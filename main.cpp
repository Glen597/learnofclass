#include <iostream>
#include <string>
using namespace std;
struct rectangle
{

    double largeur;
    double hauteur;
    double surface()const
    {
        return hauteur*largeur;
    }
    double perimetre()const
    {
        return (hauteur + largeur)*2;
    }
};





int main() {
    rectangle rect1;
    rect1.largeur = 3.0;
    rect1.hauteur=4.0;
    cout << "surface :" << rect1.surface()<<endl;
    cout << "surface :" << rect1.perimetre()<<endl;

}
