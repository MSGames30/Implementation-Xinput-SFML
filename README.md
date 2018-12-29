# Re-ColoriZe
Projet perso 1a

Implementation de la librarie Xinput pour gestion du pad Xbox360/one ,

Apporte une meilleure gestion des 2 sticks analogiques et surtout le support de la vibration du pad.

Pour utiliser Xinput il faut installer le windows 10 SDK :
https://developer.microsoft.com/en-us/windows/downloads/windows-10-sdk

et inclure la xinput.lib au propriétés du projet. (dans cette version la lib est seulement incluse en mode debug X64 (simplement paraméter le projet pour les autres modes))
Le fichier xinput.lib est dans SFML/Lib (temporaire pour les tests //TODO créer un répertoire spécifique pour la lib xinput).
