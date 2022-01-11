#pragma once
#include "Employe.h"
class Commercial : public Employe
{
public:
	Commercial(string nom, string prenom, float indice, float nmbre);
	float calcul_salaire() const override;


	~Commercial();



private:
	float nmbre_ventes;
};

