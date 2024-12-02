Titre du projet : Simulation d'un écosystème en C
Technologies utilisées :

    Langage C : Développement du programme principal et gestion des interactions entre les éléments de l'écosystème.
    Structures de données : Utilisation de tableaux, structures, et pointeurs pour représenter les entités et leur état.
    Fichiers séparés pour modularité :
        ecosys.h : Déclarations des structures, constantes et prototypes des fonctions.
        ecosys.c : Implémentation des fonctions principales, incluant la logique de simulation.
        Plusieurs fichiers main.c : Permettant des tests et des démonstrations spécifiques.
    Makefile : Automatisation de la compilation et des tests via des commandes simples (ex. make all ou make clean).

Date de réalisation : Juin - Juillet 2024

Description :
Ce projet simule un écosystème où cohabitent proies et prédateurs, reproduisant leurs interactions dynamiques. Il se base sur des règles simples :

    Les proies se déplacent, se reproduisent, ou meurent si elles ne trouvent pas de nourriture.
    Les prédateurs chassent les proies pour survivre et se reproduisent lorsqu’ils atteignent un seuil d’énergie.

La simulation se déroule sur une grille, où chaque case représente une unité spatiale. Les entités se déplacent aléatoirement, et leurs actions sont régies par des paramètres définis (ex. taux de reproduction, énergie).

Caractéristiques principales :

    Fichiers séparés pour une meilleure organisation :
        ecosys.h : Définitions des structures (Proie, Prédateur), constantes (ex. taille de la grille), et prototypes des fonctions.
        ecosys.c : Logique des interactions (ex. chasse, reproduction, déplacement).
        Fichiers main.c : Tests indépendants pour expérimenter différentes configurations.
    Compilation optimisée avec Makefile :
        Commande make all pour générer l'exécutable.
        Commande make clean pour nettoyer les fichiers objets.
    Tests unitaires : Vérification de la fiabilité des fonctions principales.

Objectif pédagogique :
Approfondir la compréhension du langage C, en mettant en pratique la modularité, la gestion dynamique de la mémoire, et les principes de programmation bas-niveau.

Le projet est conçu pour être exécuté en local via un terminal après compilation.

Objectif principal :
Créer une simulation dynamique et réaliste pour modéliser un écosystème, tout en structurant le code pour qu'il soit lisible, réutilisable et facilement extensible.
