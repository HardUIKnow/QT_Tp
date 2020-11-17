#include<Drapeau.h>
#include<Color.h>
#include <QLabel>
///// Classe Drapeau //////
Drapeau::Drapeau(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(100, 100, 300, 300);
}

Drapeau::Drapeau(QString C1, QString C2, QString C3, QString type, QString title)
{
    Color *Couleur1 = new Color(C1);
    Color *Couleur2 = new Color(C2);
    Color *Couleur3 = new Color(C3);


    if (type == "Horizontal")

    {
        Horiz_layout->addWidget(Couleur1);
        Horiz_layout->addWidget(Couleur2);
        Horiz_layout->addWidget(Couleur3);
        Horiz_layout->setSpacing(0);
        Horiz_layout->setMargin(0);
        QWidget *widget = new QWidget;
        widget->setLayout(Horiz_layout);
        widget->resize(400,400);
        widget->setWindowTitle(title);
        widget->show();
       } else
        if (type == "Vertical") {
        Vertic_layout->addWidget(Couleur1);
        Vertic_layout->addWidget(Couleur2);
        Vertic_layout->addWidget(Couleur3);
        Vertic_layout->setSpacing(0);
        Vertic_layout->setMargin(0);
        QWidget *widget = new QWidget;
        widget->setLayout(Vertic_layout);
        widget->resize(400,400);
        widget->setWindowTitle(title);
        widget->show();
        }

}


Drapeau::~Drapeau()
{

}
