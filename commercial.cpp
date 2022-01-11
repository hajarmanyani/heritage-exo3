#include "Commercial.h"

Commercial::Commercial(string nom, string prenom, float indice, float nmbre)
    : Employe(nom, prenom, indice)

{
    this->nmbre_ventes = nmbre;
}

float Commercial::calcul_salaire() const
{
    float salaire = this->Employe::calcul_salaire() + (this->nmbre_ventes / 100);
    return salaire;
}

Commercial::~Commercial()
{

}