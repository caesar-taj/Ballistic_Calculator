#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onRegisterClicked();
    void onLoginClicked();

private:
    Ui::MainWindow *ui;
    void saveCredentials(const QString &username, const QString &password);
    bool verifyCredentials(const QString &username, const QString &password);
};

#endif // MAINWINDOW_H
