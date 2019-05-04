# Exemple Xinput avec SFML


Projet exemple pour la librairie Xinput.

Implémentation de la librairie Xinput pour gestion du pad Xbox360/one ,

Apporte une meilleure gestion des 2 sticks analogiques et surtout le support de la vibration du pad.

Pour compiler le projet avec Xinput il faut installer le windows 10 SDK (pour avoir le header xinput.h):
https://developer.microsoft.com/en-us/windows/downloads/windows-10-sdk (prendre la dernière version)

et inclure la xinput.lib au propriétés du projet (dans ce projet la lib est seulement incluse en mode debug X64 (il reste simplement à paraméter le projet pour les autres modes)).

Le fichier xinput.lib est dans SFML/Lib (temporaire pour les tests //TODO créer un répertoire spécifique pour la lib xinput).

Pour tester (avec un pad type xbox360/one), lancer l'exécutable Debug, les instructions sont affichées sur la fenêtre de commande.


Documentation de Xinput dispo ici : https://docs.microsoft.com/en-us/windows/desktop/xinput/programming-guide

Bien respecter l'ordre des includes !!
