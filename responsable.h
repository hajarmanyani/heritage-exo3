#pragma once
#include "Employe.h"
#include <vector> // stl

class Responsable : public Employe
{
public:
    Responsable(string nom, string prenom, int indice, string titre);
    void add_subor(Employe* E);
    void afficher() const override;
    ~Responsable();

private:
    vector<Employe*> subor;
    string titre;
};
