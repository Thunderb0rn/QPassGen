#include "qpass.h"
#include "ui_qpass.h"

QPass::QPass(QWidget *parent) : QMainWindow(parent), m_ui(new Ui::QPass) {
    m_ui->setupUi(this);

    QIcon reload_icon("ui/reload.png");
    QIcon icon("ui/icon.png");
    setWindowIcon(icon);
    m_ui->generate_button->setIcon(reload_icon);


    connect(m_ui->generate_button, &QPushButton::clicked, this, &QPass::generate_btn);
    connect(m_ui->password_len, &QSlider::valueChanged, this, &QPass::slider_value);
    connect(m_ui->len, static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &QPass::spinbox_value);

}

void QPass::generate_btn() {

    bool number = m_ui->number->checkState();
    bool letter = m_ui->letter->checkState();
    bool symbol = m_ui->symbols->checkState();

    if (number == false && letter == false && symbol == false) {
        _passwd = "PASSWORD";
        QMessageBox msgBox;
        msgBox.setWindowTitle("Warning");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("Select at least one parameter to generate a password.");
        msgBox.exec();
    } else {
        _passwd = QString::fromStdString( generator.generate(m_ui->len->value(), letter, number, symbol) );
    }

    m_ui->password_line->setText(_passwd);
}

void QPass::slider_value(){
    m_ui->len->setValue( m_ui->password_len->value() );
}

void QPass::spinbox_value(){
    m_ui->password_len->setValue( m_ui->len->value() );
}

QPass::~QPass() = default;
