# Recherche_de_nombres_premiers
the versions are in the "lib" folder

# Description
Ce projet contient un programme en C++ conçu pour trouver les nombres premiers jusqu'à une limite donnée. Le programme propose plusieurs versions, chacune apportant des améliorations et optimisations successives.

# Dépendances
- `<Windows.h>`: Pour l'affichage des caractères UTF-8 dans la console.
- `<iostream>`: Pour les opérations d'entrée/sortie.
- `<chrono>`: Pour mesurer le temps d'exécution.
- `<cmath>`: Pour les opérations mathématiques, notamment la racine carrée.

# Auteur
https://github.com/Formidabledu59

# Versions du Programme

 Version 1
- Description : Vérifie si un nombre saisi par l'utilisateur est un nombre premier.
- Fonctionnement détaillé :
  - L'utilisateur saisit un nombre.
  - Le programme vérifie si le nombre est premier en utilisant une méthode simple.
  - Affichage du résultat et du temps d'exécution.

 Version 2
- Description : Trouve tous les nombres premiers jusqu'à une limite donnée.
- Fonctionnement détaillé :
  - L'utilisateur saisit une limite.
  - Le programme utilise une boucle pour tester chaque nombre jusqu'à la limite.
  - Affichage des nombres premiers et du temps d'exécution.

 Version 3
- Description : Amélioration de la version 2 en utilisant la racine carrée pour optimiser les tests de primalité.
- Fonctionnement détaillé :
  - Utilisation de la racine carrée pour réduire le nombre de divisions nécessaires.
  - Affichage des nombres premiers et du temps d'exécution.

 Version 4
- Description : Optimisation de la boucle pour tester uniquement les nombres impairs jusqu'à la limite.
- Fonctionnement détaillé :
  - Utilisation d'une boucle optimisée pour les nombres impairs.
  - Affichage des nombres premiers et du temps d'exécution.

# Variables
- `limite`: Limite supérieure jusqu'à laquelle rechercher les nombres premiers.
- `nbTest`: Nombre en cours de test.
- `estPremier`: Variable booléenne indiquant si un nombre est premier ou non.
- `diviserTest`: Diviseur utilisé pour tester la primalité d'un nombre.
- `resDivision`: Résultat de la division lors du test de primalité.
- `cpt`: Compteur pour suivre le nombre de nombres premiers trouvés.
- `limitePlus`: Racine carrée du nombre en cours de test, utilisée pour optimiser le test de primalité.

# Comment utiliser
- Compilez le programme en utilisant un compilateur C++ compatible.
- Exécutez le programme généré.
- Suivez les instructions à l'écran pour saisir les paramètres nécessaires.

# Remarques
- Assurez-vous d'avoir les dépendances nécessaires installées et configurées sur votre système.
- Les versions ultérieures incluent des optimisations pour améliorer les performances.
