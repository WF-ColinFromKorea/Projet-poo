#ifndef INTERPRETENPI_H
#define INTERPRETENPI_H

#include <QMainWindow>
#include <QtWidgets>
#include <pile.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

class interpretenpi
{
public :
    interpretenpi();
    void interpretation(const QString &);
    double depiler();
    QString depilerQString();

    void addition();
    void soustraction();
    void multiplication();
    void division();
    void push();
    void pushstr();
    void pop();
    void popstr();
    void copy();
    void copystr();
    void print();
    void printstr();
    void display();
    void displaystr();
    void count();
    void countstr();
    void swap();
    void swapstr();
    void sin();
    void cos();
    void tan();
    void sqrt();
    void trunc();
    void line();
    void color();
    void drawstr();
    void exit();

    void affichage(double);
    void affichage(QString);

private :
    Pile<double> dPile;
    Pile<QString> sPile;


    map<QString, double> database;
};

#endif // INTERPRETENPI_H
