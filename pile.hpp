#ifndef PILE_H
#define PILE_H

using namespace std;

#include <QtWidgets>

template<typename T>
class Pile
{
private :

    int sommet; // indice de la premiére position libre dans le tableau
    vector<T> Tpile; // Tableau contenant les éléments de la pile

public :

    Pile()
    {

    }

    bool empty() const // Renvoie vrai (true)si la pile est vide
    {
        return (Tpile.size() == 0);
    }

    int size() const
    {
        return Tpile.size();
    }

    void push(const T& element) // ajoute un élément au dessus de la pile
    {
        Tpile.push_back(element);
    }

    void pop() // retire un élément du top_pile de la pile
    {
        assert(!empty());
        return Tpile.pop_back();
    }

    T& top() // Renvoie la valeur du top_pile de la pile
    {
        assert(!empty());
        return Tpile.back();
    }

    const T& top() const // Renvoie la valeur du top_pile de la pile pour un const
    {
        assert(!empty());
        return Tpile.back();
    }



};

#endif // PILE_H
