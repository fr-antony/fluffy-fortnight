# C Project

## Commandes pour compiler
```shell
gcc main.c -o main -Wall -Werror -std=c99 -fstack-protector && ./main
```

## Mise en situation
Le SVG est un format graphique qui représente des formes via des vecteurs pour assurer qu'il n'y a pas de perte de résolution. Un SVG est un plan en 2 dimensions sur lequel on peut venir y dessiner des formes ou des trajectoires. Un SVG est composé de deux éléments :
- Un « viewport » : Il s'agit d'une fenêtre sur le plan en deux dimensions. Seuls les éléments visibles dans cette fenêtre sont dessinés.
- D'une liste d'éléments graphiques qui peuvent être stylisés.

Vous êtes chargé de développer une interface par ligne de commande pour créer, éditer, sauver, charger et visualiser des structures graphiques similaires au format SVG. Je précise ici que vous êtes libre d'adapter le format SVG tant que vous respectez le principe. Seules les formes suivantes sont nécessaires pour ce projet :
- Les cercles
- Les ellipses
- Les carrés
- Les rectangles
- Les lignes
- Les enchainements de lignes
- Les polygones
- Les trajectoires ("chemins")
- Les groupes
Vous trouverez à ce lien https://developer.mozilla.org/fr/docs/Web/SVG/Reference/Element/svg les détails de chaque forme. 

## Consignes
- Vous utiliserez le compiler GCC.
- Vous utiliserez la version C99 (rappel de compilation : gcc -std=c99).
- Vous écrirez un fichier Makefile pour compiler et nettoyer votre projet à l'aide des commandes make build et make clean.
- Vous écrirez un fichier README.md pour présenter votre projet.
- Les librairies natives sont autorisées (ex: stdbools, stdlib, stdio, etc ...). Les autres librairies ne sont pas autorisées. En cas de doute sur une librairie je vous invite fortement à venir me le demander.
- La génération de code à l'aide d'IA(s) (GPT, Mistral, Copilot, Cursor, ...) n'est pas recommandée.
- Vous commenterez votre code au format javadoc.

## A faire
- [ ] Faire le makefile

## Présentation du projet 
