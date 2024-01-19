/**
 * Fichier Application
 * Cible d'exécution : Windows
 * Nom du fichier : V3
 * Description : Programme pour trouver les nombres premiers jusqu'à une limite donnée.
 * Dépendances (<Windows.h>, <iostream>, <chrono>, <cmath>):
 * Auteur : https://github.com/Formidabledu59
 **/

#include <Windows.h> // Pour afficher des caractères UTF-8 dans la console
#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;
using namespace std::chrono;

int main()
{
    SetConsoleOutputCP(CP_UTF8); // Activation de l'affichage des caractères UTF-8 dans la console
    setvbuf(stdout, nullptr, _IOFBF, 1000); // Amélioration de la mise en mémoire tampon de la sortie standard

    // Déclaration des variables
    int limite = 0;
    int nbTest;
    bool estPremier = true;
    int diviserTest = 2;
    int resDivision = 0;
    int cpt = 0;
    float limitePlus; // Utilisation de float pour la racine carrée

    // IHM (Interface Homme-Machine) : Saisie de la limite
    cout << "Recherche des nombres premiers inférieurs à : ";
    cin >> limite;

    // Calcul des nombres premiers jusqu'à la limite
    auto start = high_resolution_clock::now(); // Instant de départ

    // Boucle pour chaque nombre jusqu'à la limite
    for (nbTest = 2; nbTest < limite; nbTest++)
    {
        diviserTest = 2;
        resDivision = 0;
        estPremier = true;
        limitePlus = sqrt(nbTest); // Calcul de la racine carrée pour optimiser la recherche de la primalité

        // Vérification de la primalité
        while ((diviserTest <= limitePlus) && (estPremier == true))
        {
            resDivision = (nbTest % diviserTest);
            if (resDivision == 0)
            {
                estPremier = false;
            }
            diviserTest = diviserTest + 1;
        }

        // Affichage des nombres premiers
        if (estPremier == true)
        {
            cout << nbTest << "\t";
            cpt = cpt + 1;
            if (cpt % 10 == 0)
            {
                cout << endl;
            }
        }
    }

    auto stop = high_resolution_clock::now(); // Instant d'arrêt

    // IHM : Affichage du nombre de nombres premiers trouvés et du temps d'exécution
    cout << endl;
    cout << cpt << " trouvés" << endl;
    cout << "Temps d'exécution : " << duration_cast<microseconds>(stop - start).count() << " us" << endl;

    return 0;
}
