#include "Responsable.h"

Responsable::Responsable(string nom, string prenom, int indice, string titre)
    :Employe(nom, prenom, indice)
{
    std::cout << " constructeur de la classe responsable" << std::endl;
    this->titre = titre;
    this->subor = vector<Employe*>(); // taille=0

}

void Responsable::add_subor(Employe* E)
{
    this->subor.push_back(E);
}



void Responsable::afficher() const
{
    std::cout << "afficher de la classe Responsable" << std::endl;
    this->Employe::afficher();
    std::cout << "titre: " << this->titre << std::endl;

    for (int i = 0; i < this->subor.size(); i++)
    {
        this->subor[i]->afficher();
    }



}

Responsable::~Responsable()
{
    std::cout << " destructeur  de la classe responsable" << std::endl;
    this->subor.clear();
}
