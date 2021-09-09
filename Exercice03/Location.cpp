/* But: Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une
 automobile louée. L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont soumises
 par le requérant.
 Les différentes sources de dépenses sont :
o Coût de la location de 45$ par jour et comprend 250 km gratuits par jour.
o La consommation du véhicule est 7.6 litres aux 100 km.
o 1 litre d’essence coûte 1.35$
o 0.05$ du kilomètre est exigé pour chaque kilomètre supplémentaire.Auteur: Charles Beauchamp
   Date: 09-09-2021
   */
#include <iostream>

void main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables.

   int Km;
   int jour;
   double coutLocation;
   double coutKmPlus;
   double coutGaz;
   double coutFinale;

   std::cout << "Veuillez entrer le nombre de km parcouru ";
   std::cin >> Km;
   std::cout << "Veuillez entrer le nb de jour ";
   std::cin >> jour;
   if (Km > 0 && jour > 0)
   {



      // On va calculer le cout de la location
      coutLocation = 45 * jour;
      // Si le nombre de km parcouru depasse 250km/jour alors on doit calculer le cout du km de plus.
      if (Km > 250 * jour)
      {
         coutKmPlus = (Km - 250 * jour) * 0.05;
      }
      else
      {
         coutKmPlus = 0;
      }
      // On calcule le cout de l'essence.
      coutGaz = 7.6 * 1.35 * Km / 100;
      // On doit afficher le montant totale
      coutFinale = coutGaz + coutLocation + coutKmPlus;
      std::cout << "Ca va te couter..." << coutFinale << "$" << std::endl << "\n";

   }
   else
   {
      std::cout << "Heyy t'es don bin..." << std::endl;
   }
   system("pause");
}

/* Km       Jour        Cout Final
*  0        0              0
*  500      3              186.3
*  1000     3              250.1
*  -1       -1             Erreur
*  50       3              140.13
*/