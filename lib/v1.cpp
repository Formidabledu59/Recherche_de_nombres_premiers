/**
 * Fichier Application
 * Cible d'exécution : Windows
 * Nom du fichier : V1
 * Description : Programme pour vérifier si un nombre est premier.
 * Dépendances (<Windows.h>, <iostream>, <chrono>):
 * Auteur : https://github.com/Formidabledu59
 **/

#include <Windows.h> // Pour afficher des caractères UTF-8 dans la console
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    SetConsoleOutputCP(CP_UTF8); // Activation de l'affichage des caractères UTF-8 dans la console
    setvbuf(stdout, nullptr, _IOFBF, 1000); // Amélioration de la mise en mémoire tampon de la sortie standard

    // Déclaration des variables
    int nbTest;
    string message = " est bien un nombre premier";

    bool estPremier = true;
    int diviserTest = 2;
    int resDivision = 0;

    // IHM (Interface Homme-Machine) : Saisie du nombre à tester
    cout << "Entrez un nombre : ";
    cin >> nbTest;

    // Calcul de la primarité du nombre
    auto start = high_resolution_clock::now(); // Instant de départ

    while ((diviserTest < nbTest) && (estPremier == true))
    {
        resDivision = (nbTest % diviserTest);
        if (resDivision == 0)
        {
            estPremier = false;
            message = " n'est pas un nombre premier";
        }
        diviserTest = diviserTest + 1;
    }

    auto stop = high_resolution_clock::now(); // Instant d'arrêt

    // IHM : Affichage du résultat et du temps d'exécution
    cout << nbTest << message << endl;
    cout << "Temps d'exécution : " << duration_cast<microseconds>(stop - start).count() << " us" << endl;

    return 0;
}
