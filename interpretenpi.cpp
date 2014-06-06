#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cassert>
#include <stdexcept>
#include <QApplication>

using namespace std ;

#include "interpretenpi.hpp"
#include "read.hpp"

interpretenpi::interpretenpi(int argc, char * argv[])
{
    database["+"] = &interpretenpi::addition;
    database["-"] = &interpretenpi::soustraction;
    database["*"] = &interpretenpi::multiplication;
    database["/"] = &interpretenpi::division;
    database["push"] = &interpretenpi::push;
    database["pushstr"] = &interpretenpi::pushstr;
    database["pop"] = &interpretenpi::pop;
    database["popstr"] = &interpretenpi::popstr;
    database["copy"] = &interpretenpi::copy;
    database["copystr"] = &interpretenpi::copystr;
    database["print"] = &interpretenpi::print;
    database["printstr"] = &interpretenpi::printstr;
    database["display"] = &interpretenpi::display;
    database["displaystr"] = &interpretenpi::displaystr;
    database["count"] = &interpretenpi::count;
    database["countstr"] = &interpretenpi::countstr;
    database["swap"] = &interpretenpi::swap;
    database["swapstr"] = &interpretenpi::swapstr;
    database["sin"] = &interpretenpi::sin;
    database["cos"] = &interpretenpi::cos;
    database["tan"] = &interpretenpi::tan;
    database["sqrt"] = &interpretenpi::sqrt;
    database["trunc"] = &interpretenpi::trunc;
    //database["line"] = &interpretenpi::line;
    //database["color"] = &interpretenpi::color;
    database["drawstr"] = &interpretenpi::drawstr;
    database["exit"] = &interpretenpi::exit;

    void interpretenpi::
    {
    void interpretenpi::addition()
    {
        double tmp_a = dPile();
        dPile.pop();
        double tmp_b = dPile();
        dPile.pop();
        double tmp_c = (tmp_a+tmp_b);
        afficher = dPile.push(tmp_c);
    }
    void interpretenpi::soustracton()
    {
        double tmp_a = dPile();
        dPile.pop();
        double tmp_b = dPile();
        dPile.pop();
        double tmp_c = (tmp_a-tmp_b);
        afficher = dPile.push(tmp_c);
    }

    void interpretenpi::multiplication()
    {
        double tmp_a = dPile();
        dPile.pop();
        double tmp_b = dPile();
        dPile.pop();
        double tmp_c = (tmp_a*tmp_b);
        afficher = dPile.push(tmp_c);
    }

    void interpretenpi::division()
    {
        double tmp_a = dPile();
        dPile.pop();
        double tmp_b = dPile();
        dPile.pop();
        double tmp_c = (tmp_a/tmp_b);
        afficher = dPile.push(tmp_c);

    }


    void interpretenpi::push()
    {
        push();
    }

    void interpretenpi::pop()
    {
        pop();
    }

    void interpretenpi::print()
    {
        afficher= pop;
    }

    void interpretenpi::copy()
    {

    }

    void interpretenpi::display()
    {
        for(unsigned int i=0, i<sommet();i++)
        {
            afficher= dPile[i];
        }
    }

    void interpretenpi::count()
    {
        int cmp;
        for (unsigned int i=0; i< sommet; i++)
        {
            pop.dPile[i];
            cmp++;
        }
        afficher = cmp;

    }
    /*void interpretenpi::swap()
    {
        double tmp[];
       for (unsigned int i=0; i< sommet; i++)
        {
            tmp_tab[i] = pop.dPile[i];
        }
    }*/
    const double pi = 3.1415926535897932;

    void interpretenpi::sinus()
    {
        double tmp = dPile.push(sin((pop()*pi)/180));
        afficher= tmp;
    }

    void interpretenpi::cosinus()
    {
        double tmp = dPile.push(cos((pop()*pi)/180));
        afficher= tmp;
    }
    void interpretenpi::tangente()
    {
        double tmp = dPile.push(tan((pop()*pi)/180));
        afficher= tmp;
    }
    void interpretenpi::racine()
    {
        double tmp = dPile.push(sqrt(pop()));
        afficher= tmp;
    }

    void interpretenpi::trunc()
    {
        double tmp = dPile.push(trunc(pop()));
        afficher= tmp;
    }

    /*void interpretenpi::line()
    {
        //Pas eu le temps
    }

    void interpretenpi::color()
    {

    }
    */

    void interpretenpi::drawstr()
    {
        pointeurSurDessin->show();
    }

    void interpretenpi::exit()
    {
        qApp->exit(0);
    }

    void interpretenpi::pushstr()
    {
        push();
    }

    void interpretenpi::popstr()
    {
        pop();
    }
    /*void interpretenpi::copystr()
    {

    }*/
    void interpretenpi::printstr()
    {
        afficher= pop;
    }
    void interpretenpi::displaystr()
    {
        for(unsigned int i=0, i<sommet();i++)
        {
            afficher= sPile[i];
        }
    }
    void interpretenpi::count()
    {
        int cmp;
        for (unsigned int i=0; i< sommet; i++)
        {
            pop.sPile[i];
            cmp++;
        }
        afficher = cmp;

    }
    /*void interpretenpi::swapstr()
    {
    vide mais bon tempis c'est mieux que si c'était plein.
    }*/
    void interpretenpi::read
    {
           QTextStream cout(stdout);
           QTextStream cin(stdin);
           cout << "Entrer l'emplacement du fichier : ";
           QString nom_fichier = cin.readLine(); //entrer l'emplacement du fichier
           cout << nom_fichier;

           QString *root = new QString(nom_fichier); //creer le chemin du fichier

           QString *choice = new QString;

           QFile fichier(root); //prend le fichier
           fichier.open(QIODevice::ReadOnly | QIODevice::Text); //ouvre le fichier en lecture seul | type du fichier
           QTextStream flux(&fichier);//lit le fichier

           while(! flux.atEnd())
           {
               flux >> choice;

               if(database[choice]) //permet de chercher dans le ficher , les map qui sont dans une pile double
               {
                   f = database[choice];
                   (piledouble.*f)();
               }
               else if(database[choice]) //permet de chercher dans le ficher , les map qui sont dans une pile string
                   s = database[choice];
                   (pilestr.*s)();
               }
               else if(choice != ""){
                   console->append("Commande non trouvé");
               }
    }
    }

    void interpretenpi::read
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

}
