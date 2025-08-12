#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect buttons to their respective slots
    connect(ui->registerButton, &QPushButton::clicked, this, &MainWindow::onRegisterClicked);
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::onLoginClicked);

    // Set password input to hidden mode
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onRegisterClicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Username or Password cannot be empty.");
        return;
    }

    saveCredentials(username, password);
    QMessageBox::information(this, "Registration Successful", "You have registered successfully!");
}

void MainWindow::onLoginClicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Username or Password cannot be empty.");
        return;
    }

    if (verifyCredentials(username, password)) {
        QMessageBox::information(this, "Login Successful", "Welcome, " + username + "!");
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid credentials!");
    }
}

void MainWindow::saveCredentials(const QString &username, const QString &password)
{
    QFile file("credentials.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << username << ":" << password << "\n";
        file.close();
    } else {
        QMessageBox::warning(this, "Error", "Could not open file to save credentials.");
    }
}

bool MainWindow::verifyCredentials(const QString &username, const QString &password)
{
    QFile file("credentials.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open credentials file.");
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList credentials = line.split(":");
        if (credentials.size() == 2 && credentials[0] == username && credentials[1] == password) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}
