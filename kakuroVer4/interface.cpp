#include "interface.h"
#include "ui_interface.h"

Interface::Interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

Interface::~Interface()
{
    delete ui;
}
