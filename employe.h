#pragma once
#include<iostream>
using namespace std;
class Employe
{
public:
	Employe(string nom, string prenom, float indice);
	Employe();
	virtual void afficher() const;

	virtual float calcul_salaire() const;
	~Employe();

private:
	string nom;
	string prenom;
	const int matricule;
	static int count;
	float indice_sal;
	static float val;

};

