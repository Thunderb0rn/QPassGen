#ifndef QPASS_H
#define QPASS_H

#include <QMainWindow>
#include <QScopedPointer>
#include <QString>
#include <QDebug>
#include <QMessageBox>

#include "passgen.h"

namespace Ui {
class QPass;
}

class QPass : public QMainWindow
{
    Q_OBJECT

public:
    explicit QPass(QWidget *parent = nullptr);
    ~QPass() override;

private:
    unsigned int password_len = 4;
    QString _passwd="";
    PassGen generator;

    QScopedPointer<Ui::QPass> m_ui;

private slots:
    void generate_btn();
    void slider_value();
    void spinbox_value();
};

#endif // QPASS_H
