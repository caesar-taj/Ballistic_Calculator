#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calculateButton_clicked() {
    // Get inputs from the UI
    double velocity = ui->lineEditVelocity->text().toDouble();
    double angle = ui->lineEditAngle->text().toDouble();
    double altitude = ui->lineEditAltitude->text().toDouble();

    // Check for valid inputs
    if (velocity <= 0 || angle <= 0 || angle >= 85 || altitude < 0) {
        ui->labelRange->setText("Invalid input. Please check your values.");
        return;
    }

    // Perform calculations
    double range = calculateRange(velocity, angle, altitude);
    double maxHeight = calculateMaxHeight(velocity, angle, altitude);
    double timeOfFlight = calculateTimeOfFlight(velocity, angle, altitude);

    // Display results on UI
    ui->labelRange->setText("Range: " + QString::number(range) + " meters");
    ui->labelMaxHeight->setText("Max Height: " + QString::number(maxHeight) + " meters");
    ui->labelTimeOfFlight->setText("Time of Flight: " + QString::number(timeOfFlight) + " seconds");
}

