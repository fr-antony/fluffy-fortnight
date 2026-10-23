# C SVG Generator (`fluffy-fortnight`)

Une bibliothèque et un outil en langage C conçus pour créer, éditer et manipuler des fichiers vectoriels SVG (`.svg`).

## À propos

**Fluffy Fortnight** est un projet réalisé dans le cadre de la formation chez Coda_. L'objectif principal est de manipuler la mémoire, les structures de données et la gestion des fichiers en C à travers la génération dynamique de fichiers image au format SVG (Scalable Vector Graphics).

## Fonctionnalités

- 🔹 **Création de fichiers SVG** : génération de formes de base (rectangles, cercles, lignes, polygones) et gestion des couleurs/styles.
- 🔹 **Édition** : modification des attributs des éléments existants dans une structure SVG en mémoire.
- 🔹 **Suppression** : nettoyage ou retrait de formes spécifiques avant l'exportation.
- 🔹 **Tutoriel intégré** : mode guidé ou exemples d'utilisation pour apprendre à manipuler l'outil rapidement.

## Technologies utilisées

- **Langage** : C99
- **Compilateur** : `GCC`
- **Build System** : `Make`

## Prérequis

Avant de compiler le projet, assurez-vous de disposer des outils suivants sur votre système :

- `git` pour récupérer le dépôt
- Le compilateur C `gcc`
- L'utilitaire `make`

## Installation

1. Cloner le dépôt :

   ```bash
   git clone https://github.com/fr-antony/fluffy-fortnight.git
   cd fluffy-fortnight
   ```

2. Compiler le projet :

   ```bash
   make
   ```

3. Nettoyer les fichiers de compilation (optionnel) :

   ```bash
   make clean
   ```

## Utilisation

Lancer l'exécutable généré pour démarrer le programme :

```bash
./main
```

> Ajustez le nom de l'exécutable selon la cible définie dans votre `Makefile`.

## Contribution

Les contributions sont les bienvenues !

1. Forkez le projet.
2. Créez une branche pour votre fonctionnalité :
   ```bash
   git checkout -b feature/NouvelleFonctionnalite
   ```
3. Commitez vos changements :
   ```bash
   git commit -m "Ajout d'une nouvelle forme SVG"
   ```
4. Pushez vers votre branche :
   ```bash
   git push origin feature/NouvelleFonctionnalite
   ```
5. Ouvrez une Pull Request.