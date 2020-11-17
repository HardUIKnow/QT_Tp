#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <Color.h>
#include <Drapeau.h>
#include <QPushButton>
#include <QHBoxLayout>
#include <QStackedLayout>
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //--- Déclaration des boutons ---//
    QPushButton *B1 = new QPushButton("ALLEMAGNE");
    QPushButton *B2 = new QPushButton("AUTRICHE");
    QPushButton *B3 = new QPushButton("BELGIQUE");
    QPushButton *B4 = new QPushButton("BULGARIE");
    QPushButton *B5 = new QPushButton("ESTONIE");
    QPushButton *B6 = new QPushButton("France");
    QPushButton *B7 = new QPushButton("HONGRIE");
    QPushButton *B8 = new QPushButton("IRLANDE");
    QPushButton *B9 = new QPushButton("ITALIE");
    QPushButton *B10 = new QPushButton("LETTONIE");
    QPushButton *B11 = new QPushButton("LITUANIE");
    QPushButton *B12= new QPushButton("LUXEMBOURG");
    QPushButton *B13 = new QPushButton("PAYS-BAS");
    QPushButton *B14 = new QPushButton("ROUMANIE");

public slots:
    void Creer_un_drapeau();
    void Drapeau_ALLEMAGNE();
    void Drapeau_AUTRICHE();
    void Drapeau_BELGIQUE();
    void Drapeau_BULGARIE();
    void Drapeau_ESTONIE();
    void Drapeau_France();
    void Drapeau_HONGRIE();
    void Drapeau_IRLANDE();
    void Drapeau_ITALIE();
    void Drapeau_LETTONIE();
    void Drapeau_LITUANIE();
    void Drapeau_LUXEMBOURG();
    void Drapeau_PAYS_BAS();
    void Drapeau_ROUMANIE();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
