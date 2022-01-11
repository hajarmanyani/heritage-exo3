// gestion_employes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Employe.h"
#include "Responsable.h"
int main()
{

    Employe *E1= new Employe("emp1", "emp1", 20);
    Employe *E4=new Responsable("emp4", "emp4", 25,"chef3");


    Responsable* Chef2 = new Responsable("chef2", "chef2", 35,"chef2");
    Responsable *ceo = new Responsable("Ceo", "Ceo", 40, "Ceo");
    Responsable *chef1= new Responsable("chef1", "chef1", 30, "chef1");
    
    Chef2->add_subor(E4);
    chef1->add_subor(Chef2); 
    ceo->add_subor(chef1); 
    ceo->add_subor(E1);
    ceo->afficher();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
