#include "juego.h"
#include "ui_juego.h"

void Juego::paintEvent(QPaintEvent *event)
{
    QRectF rectangle(50, 100, 100, 100);
    QPainter painter(this);
    painter.drawEllipse(rectangle);

    QRectF target(10.0, 20.0, 80.0, 60.0);
    QRectF source(0.0, 0.0, 70.0, 40.0);
    QImage image("/home/administrador/Qt Project/2Examen_P60_Fork/Recursos/Painter.png");

    painter.drawImage(target, image, source);
}

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());
}

Juego::~Juego()
{
    delete ui;
}


void Juego::on_btnArriba_released()
{

}


void Juego::on_btnAbajo_released()
{

}


void Juego::on_btnIzqueirda_released()
{

}


void Juego::on_btnDerecha_released()
{

}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

