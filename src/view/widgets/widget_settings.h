#ifndef WIDGET_SETTINGS_H
#define WIDGET_SETTINGS_H

#include <QWidget>

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    Settings(QWidget *parent = nullptr);
    ~Settings();

private:
    Ui::Settings *ui;
};

#endif // WIDGET_SETTINGS_H
