#include <iostream>
#include "interpretenpi.hpp"
#include "read.hpp"
#include <QApplication>

read::read()
{
    QTextStream cout(stdout);
    QTextStream cin(stdin);
    cout << "Entrer l'emplacement du fichier : ";
    QString nom_fichier = cin.readLine();
    cout << nom_fichier;

    QString *root = new QString(nom_fichier);

    QString *choice = new QString;

    QFile fichier(root);
    fichier.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream flux(&fichier);

    while(! flux.atEnd())
    {
        flux >> choice;

        if(database[choice])
        {
            f = database[choice];
            (piledouble.*f)();
        }
        else if(database[choice])
        {
            s = database[choice];
            (pilestr.*s)();
        }
        else if(choice != ""){
            console->append("Commande non trouvé");
        }
    }

}

