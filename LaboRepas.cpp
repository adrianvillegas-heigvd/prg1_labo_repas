//---------------------------------------------------------
// Fichier        : LaboRepas.cpp
// Auteur(s)      : Lopes Dos Santos Rodrigo, Villegas Castrillon Adrian
// Date           : 2021-10-10
// But            : XXXXXXXXXXXXXX
// Modifications  :
// Remarque(s)    :
//---------------------------------------------------------

#include <cstdlib>   // EXIT_SUCCESS
#include <iostream>  // cin et cout
#include <iomanip>   // setprecision
#include <limits>    // numeric_limits<streamsize>

using namespace std;

int main() {
    const float PRIX_ENTREE  =  4.30;
    const float PRIX_PLAT    = 12.50;
    const float PRIX_BOISSON =  3.00;
    const float PRIX_DESSERT =  6.00;
    const float PRIX_CAFE    =  2.80;
    const int   LIMIT_INF    =     0;
    const int   LIMIT_SUP    =    10;

    // Il n'est pas possible d'avoir de 1/2 comandes, ils sont représentés par un entier
    int         nbre_entree;
    int         nbre_plat;
    int         nbre_boisson;
    int         nbre_dessert;
    int         nbre_cafe;

    // XXXX
    float       cout_entree;
    float       cout_plat;
    float       cout_boisson;
    float       cout_dessert;
    float       cout_cafe;
    float       cout_total;

    // Définit la précision d'affichage des nombres à virgules (exemple: 2.50)
    cout << fixed << setprecision(2);

    cout << "bonjour, ce programme ..."                             << endl
         << "voici le prix des elements"                            << endl
         << "=========================="                            << endl
         << " - entree     : " << PRIX_ENTREE                       << endl
         << " - plat       : " << PRIX_PLAT                         << endl
         << " - boisson    : " << PRIX_BOISSON                      << endl
         << " - dessert    : " << PRIX_DESSERT                      << endl
         << " - cafe       : " << PRIX_CAFE                         << endl
         << "NB : limite de saisie [0 - 10]"                        << endl
                                                                    << endl;

    // Saisie des variables
    cout << "votre commande"                                        << endl
         << "=============="                                        << endl;

    cout << " - nbre d'entree   : ";
    cin >> nbre_entree;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (nbre_entree >= LIMIT_INF && nbre_entree <= LIMIT_SUP) {
        cout << " - nbre de plat    : ";
        cin >> nbre_plat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (nbre_plat >= LIMIT_INF && nbre_plat <= LIMIT_SUP) {
            cout << " - nbre de boisson : ";
            cin >> nbre_boisson;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (nbre_boisson >= LIMIT_INF && nbre_boisson <= LIMIT_SUP) {
                cout << " - nbre de dessert : ";
                cin >> nbre_dessert;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                if (nbre_dessert >= LIMIT_INF && nbre_dessert <= LIMIT_SUP) {
                    cout << " - nbre de cafe    : ";
                    cin >> nbre_cafe;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << endl;

                    if (nbre_cafe >= LIMIT_INF && nbre_cafe <= LIMIT_SUP) {

                        // Calcul du ticket
                        cout_entree = isdigit(nbre_entree) ? PRIX_ENTREE * nbre_entree : 0; // Pas sure :s
                        cout_plat = PRIX_PLAT * nbre_plat;
                        cout_boisson = PRIX_BOISSON * nbre_boisson;
                        cout_dessert = PRIX_DESSERT * nbre_dessert;
                        cout_cafe = PRIX_CAFE * nbre_cafe;
                        cout_total = cout_entree + cout_plat + cout_boisson + cout_dessert + cout_cafe;

                        // Affichage du ticket
                        cout << "Votre ticket" << endl
                             << "============" << endl
                             << " - " << nbre_entree << " entrees  : " << cout_dessert << endl
                             << " - " << nbre_plat << " plats    : " << cout_plat << endl
                             << " - " << nbre_boisson << " boissons : " << cout_boisson << endl
                             << " - " << nbre_dessert << " desserts : " << cout_dessert << endl
                             << " - " << nbre_cafe << " cafes    : " << cout_cafe << endl
                             << " -     total  : " << cout_total << endl
                             << "merci de votre visite" << endl
                             << endl;
                    }
                }
            }
        }
    }

    // Fin du programme
    cout << "presser ENTER pour quitter";
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    return EXIT_SUCCESS;
}