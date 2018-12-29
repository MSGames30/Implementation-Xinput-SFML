# Re-ColoriZe
Projet perso 1a

Projet exemple pour la librairie Xinput , le code source de Re-ColoriZe n'est pas encore ajouté.

Implémentation de la librairie Xinput pour gestion du pad Xbox360/one ,

Apporte une meilleure gestion des 2 sticks analogiques (pas encore d'exemple présent dans le code actuel) et surtout le support de la vibration du pad.

Pour compiler le projet avec Xinput il faut installer le windows 10 SDK (pour avoir le header xinput.h):
https://developer.microsoft.com/en-us/windows/downloads/windows-10-sdk (prendre la dernière version)

et inclure la xinput.lib au propriétés du projet (dans cette version la lib est seulement incluse en mode debug X64 (simplement paraméter le projet pour les autres modes)).

Le fichier xinput.lib est dans SFML/Lib (temporaire pour les tests //TODO créer un répertoire spécifique pour la lib xinput).

Pour tester (avec un pad type xbox360/one), lancer l'exécutable Debug, les instructions sont affichées sur la fenêtre de commande.


Documentation de Xinput dispo ici : https://docs.microsoft.com/en-us/windows/desktop/xinput/programming-guide
