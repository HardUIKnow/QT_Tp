#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Drapeaux tricolores  UE");
    resize(700,400);

    QPixmap bkgnd ("../Qt_Tp_01/DrapeauUE.jpg");

    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    //////////////////////////////////////////////////////
    ///
    ///
    QVBoxLayout *Pagelayout = new QVBoxLayout;
    QHBoxLayout *Hlayout1 = new QHBoxLayout;
    QHBoxLayout *Hlayout2 = new QHBoxLayout;
    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);
    this->B1->setGeometry(50, 100, 100, 50);
    this->B2->setGeometry(50, 100, 100, 50);
    this->B3->setGeometry(50, 100, 100, 50);
    this->B4->setGeometry(50, 100, 100, 50);
    this->B5->setGeometry(50, 100, 100, 50);
    this->B6->setGeometry(50, 100, 100, 50);
    this->B7->setGeometry(50, 100, 100, 50);
    this->B8->setGeometry(50, 100, 100, 50);
    this->B9->resize(50,50);// setGeometry(50, 50, 100, 50);
    this->B10->resize(50,50);//setGeometry(50, 50, 100, 50);
    this->B11->resize(50,50);//setGeometry(50, 50, 100, 50);
    //--- Connexion du signal "clicked()" avec le slot de création drapeau ---//
    connect(B1, SIGNAL(clicked()),this, SLOT(Drapeau_ALLEMAGNE()));
    connect(B2, SIGNAL(clicked()),this, SLOT(Drapeau_AUTRICHE()));
    connect(B3, SIGNAL(clicked()),this, SLOT(Drapeau_BELGIQUE()));
    connect(B4, SIGNAL(clicked()),this, SLOT(Drapeau_BULGARIE()));
    connect(B5, SIGNAL(clicked()),this, SLOT(Drapeau_ESTONIE()));
    connect(B6, SIGNAL(clicked()),this, SLOT(Drapeau_France()));
    connect(B7, SIGNAL(clicked()),this, SLOT(Drapeau_HONGRIE()));
    connect(B8, SIGNAL(clicked()),this, SLOT(Drapeau_IRLANDE()));
    connect(B9, SIGNAL(clicked()),this, SLOT(Drapeau_ITALIE()));
    connect(B10, SIGNAL(clicked()),this, SLOT(Drapeau_LETTONIE()));
    connect(B11, SIGNAL(clicked()),this, SLOT(Drapeau_LITUANIE()));
    connect(B12, SIGNAL(clicked()),this, SLOT(Drapeau_LUXEMBOURG()));
    connect(B13, SIGNAL(clicked()),this, SLOT(Drapeau_PAYS_BAS()));
    connect(B14, SIGNAL(clicked()),this, SLOT(Drapeau_ROUMANIE()));
    //--- Ajout des bouton au Widget Horizotal ---//
    Hlayout1->addWidget(B1);
    Hlayout1->addWidget(B2);
    Hlayout1->addWidget(B3);
    Hlayout1->addWidget(B4);
    Hlayout1->addWidget(B5);
    Hlayout1->addWidget(B6);
    Hlayout1->addWidget(B7);
    Hlayout2->addWidget(B8);
    Hlayout2->addWidget(B9);
    Hlayout2->addWidget(B10);
    Hlayout2->addWidget(B11);
    Hlayout2->addWidget(B12);
    Hlayout2->addWidget(B13);
    Hlayout2->addWidget(B14);
    QWidget *widget = new QWidget;
    widget->setLayout(Pagelayout);
    setCentralWidget(widget);
    ///
    //////////////////////////////////////////////////////


}

void MainWindow::Creer_un_drapeau()
{
 //Drapeau *D = new Drapeau("blue","red","green","Horizontal");
}

void MainWindow::Drapeau_ALLEMAGNE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("Black","red","gold","Vertical","Allemagne");

}
void MainWindow::Drapeau_AUTRICHE(){
    //Trois bandes horizontales rouge, blanche, rouge
    Drapeau *D = new Drapeau("red","white","red", "Vertical", "AUTRICHE");}
void MainWindow::Drapeau_BELGIQUE(){
    //Trois bandes horizontales noire, jaune, rouge
    Drapeau *D = new Drapeau("black","yellow","red","Horizontal", "BELGIQUE");}
void MainWindow:: Drapeau_BULGARIE(){
    //Trois bandes horizontales blanche, verte, rouge
    Drapeau *D = new Drapeau("white","green","red","Vertical", "BULGARIE");}
void MainWindow::Drapeau_ESTONIE(){
    //Trois bandes horizontales bleu, noir et blanc
    Drapeau *D = new Drapeau("blue","black","white","Vertical", "ESTONIE");
}
void MainWindow::Drapeau_France(){
    // Trois bandes horizontales bleu, noir et blanc
    Drapeau *D = new Drapeau("blue","white","red","Horizontal", "France");
}
void MainWindow::Drapeau_HONGRIE(){
    //Trois bandes horizontales rouge-blanc-vert
    Drapeau *D = new Drapeau("indianred","white","darkolivegreen","Vertical", "HONGRIE");
}
void MainWindow::Drapeau_IRLANDE(){
    //Trois bandes verticales Vert-blanc-orange
    Drapeau *D = new Drapeau("green","white","orange", "Horizontal", "IRLANDE");
}
void MainWindow::Drapeau_ITALIE(){
    //Trois bandes verticales Vert-blanc-rouge
    Drapeau *D = new Drapeau("green","white","red","Horizontal", "ITALIE");
}
void MainWindow::Drapeau_LETTONIE(){
    //Trois bandes horizontales Rouge, blanc, rouge
    Drapeau *D = new Drapeau("darkred","white","darkred", "Vertical", "LETTONIE");
}
void MainWindow::Drapeau_LITUANIE(){
    //Trois bandes horizontales jaune, vert, rouge
    Drapeau *D = new Drapeau("yellow","green","red", "Vertical", "LITUANIE");
}
void MainWindow::Drapeau_LUXEMBOURG(){
    // Trois bandes bandes horizontales rouges, blanches et bleues
    Drapeau *D = new Drapeau("red","white","cornflowerblue","Vertical", "LUXEMBOURG");
}
void MainWindow::Drapeau_PAYS_BAS(){
    // Trois bandes bandes horizontales rouges, blanches et bleues
    Drapeau *D = new Drapeau("darkred","white","darkblue","Vertical", "PAYS-BAS");}
void MainWindow::Drapeau_ROUMANIE(){
    // Trois bandes bandes verticales bleu, jaune, rouge
    Drapeau *D = new Drapeau("blue","yellow","red","Horizontal", "ROUMANIE");
}


MainWindow::~MainWindow()
{
    delete ui;
}

