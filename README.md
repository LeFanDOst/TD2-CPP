# TD2-CPP

Second TD de L2 Informatique, de Programmation Impérative Avancées (bases de C++).

# Sommaire

* [Makefile](#makefile)
	* [Compilation](#compilation)
	* [Exécution](#exécution)
	* [Nettoyage des fichiers objets](#nettoyage-des-fichiers-objets)
	* [Suppression de l'exécutable](#suppression-de-lexécutable)

# Makefile

## Compilation

Un Makefile a été écrit afin d'automatiser la compilation. Le système d'exploitation est détecté automatiquement à la compilation (Linux ou Windows uniquement). Afin de compiler, il suffit juste de saisir la commande `make` dans un terminal ouvert à la racine du projet.

## Exécution

Le Makefile écrit permet également l'exécution automatique de l'exécutable généré. Pour cela, il suffit de saisir la commande `make run` dans un terminal ouvert à la racine du projet.

	ATTENTION
	
	Sous Linux, en utilisant la commande `make run`, le Makefile va d'abord donner les droits d'exécution à l'exécutable généré à la compilation via la commande `chmod u+x main`. Il faudra d'abord taper cette commande au préalable avant de lancer l'exécutable si l'on ne passe pas par le Makefile.

## Nettoyage des fichiers objets

Le Makefile écrit permet également la suppression des fichiers objets (fichiers `.o`) générés lors de la compilation ainsi que la suppression du répertoire dans lequel ils sont contenus. Pour ce faire, il suffit juste de saisir la commande `make clean` dans un terminal ouvert à la racine du projet.

## Suppression de l'exécutable

Le Makefile écrit permet également la suppression de l'exécutable généré lors de la compilation. Pour ce faire, il suffit juste de saisir la commande `make mrproper` dans un terminal ouvert à la racine du projet.
