// But: Écrire un programme pour calcàuler le montant qu'une personne devra débourser pour faire un voyage dans une voiture louée.
// Le programme doit tenir compte du kilométrage parcouru et de la durée du voyage qui sont soumises par le voyageur.
// Auteur: Julien Lajoie
// Date: 2020-09-16

// Mon programme débute ici.
#include <iostream>



	// Lancement du main.
int main()
{
	// Attribution des variables.
		
		float kilometresparcouru;				// Nombre de kilomètres parcouru
		float kilometresexcedentaire;			// +0.05$ pour chaque kilomètre au dessus de 250km
		float consommationduvehicule = 7.6;		// 7,6L de Consommation au 100 km
		float fuel = 1.25;						// prix par litre
		float prixchargerdebase = 45;			// Prix de base 45$ / jour
		float coutkilometresexcedentaire;		// total prix excedent le 250km
		float prixtotal;						// prix total

												// Préparation du programme qui lis les symboles.
		
		setlocale(LC_ALL, "");
			
												// Message d'accueil.
		std::cout << "Bienvenue dans mon programme permettant de calculer combien vous coutera la location de votre véhicule, " << std::endl;
		std::cout << "En fonction de la durée de votre périple et de la distance parcouru par votre voiture." << std::endl;
	
												// Questions posés à l'utilisateur.
		std::cout << "\nNombre de kilomètres parcouru aujourd'hui:"; 
		std::cin >> kilometresparcouru; 
	
												// Réponse du programme en fonction du nombre entré.

		if (kilometresparcouru <= 250 && kilometresparcouru >= 0)
		{											// Prix en fonction du nombre de kilomètres parcouru plus le prix de base de la location du véhicule

			prixtotal = kilometresparcouru / 100 * consommationduvehicule * fuel + prixchargerdebase;

			std::cout << " \nLe prix charger de base est de : " << prixchargerdebase << "$" << " plus tous les autres coûts." << std::endl;
			std::cout << " \nSe qui nous apporte à un prix total de : " << prixtotal << "$\n";
		}
		else if (kilometresparcouru > 250)
		{
			kilometresexcedentaire = kilometresparcouru - 250;
			coutkilometresexcedentaire = kilometresexcedentaire * 0.05;
			prixtotal = kilometresparcouru / 100 * consommationduvehicule * fuel + prixchargerdebase + coutkilometresexcedentaire;


			std::cout << " \nLe prix charger de base est de :           ===> " << prixchargerdebase << "$" << std::endl;
			std::cout << "                                               +";
			std::cout << " \nAinsi que les autres coûts qui sont de  :  ===> " << kilometresparcouru / 100 * consommationduvehicule * fuel << "$" << std::endl;
			std::cout << "                                               +";
			std::cout << " \nDont :                                     ===> " << coutkilometresexcedentaire << "$" << " de coût en kilomètres excédentaires" << std::endl;
			std::cout << "                                                ________________________________________";
			std::cout << " \nSe qui nous apporte à un prix total de :   ===> " << prixtotal << "$ \n";
		}

		else if (kilometresparcouru < 0)
		{
			std::cout << "\n!!! ERREUR !!! c'est impossible, Veuillez entrer un nombre valide. \n";

		}


		/*
		
		
		!- PLAN DE TEST -!
		

		Si j'entre : 444 = 


	Nombre de kilomètres parcouru aujourd'hui:444

Le prix charger de base est de :           ===> 45$
                                               +
Ainsi que les autres coûts qui sont de  :  ===> 42.18$
                                               +
Dont :                                     ===> 9.7$ de coût en kilomètres excédentaires
                                                ________________________________________
Se qui nous apporte à un prix total de :   ===> 96.88$


		Si j'entre : 999 = 
		

	Nombre de kilomètres parcouru aujourd'hui:999

Le prix charger de base est de :           ===> 45$
                                               +
Ainsi que les autres coûts qui sont de  :  ===> 94.905$
                                               +
Dont :                                     ===> 37.45$ de coût en kilomètres excédentaires
                                                ________________________________________
Se qui nous apporte à un prix total de :   ===> 177.355$


		Si j'entre : 234 = 


	Nombre de kilomètres parcouru aujourd'hui:234

Le prix charger de base est de : 45$ plus tous les autres coûts.

Se qui nous apporte à un prix total de : 67.23$


		Si j'entre : 105 =


	Nombre de kilomètres parcouru aujourd'hui:105

Le prix charger de base est de : 45$ plus tous les autres coûts.

Se qui nous apporte à un prix total de : 54.975$


		Si j'entre : -500 =


Nombre de kilomètres parcouru aujourd'hui:-500

!!! ERREUR !!! c'est impossible, Veuillez entrer un nombre valide.


		Si j'entre : 0 = 

		
		Nombre de kilomètres parcouru aujourd'hui:0

Le prix charger de base est de : 45$ plus tous les autres coûts.

Se qui nous apporte à un prix total de : 45$

*/
	return 0;
}