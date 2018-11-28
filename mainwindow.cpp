#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString in_gas = ui->lineEdit->text();
    double d_gas = in_gas.toDouble();


    QString in_electric = ui->lineEdit_2->text();
    double d_electric = in_electric.toDouble();

    QString in_books = ui->lineEdit_3->text();
    double d_books = in_books.toDouble();


    QString in_carGas = ui->lineEdit_4->text();
    double d_carGas = in_carGas.toDouble();

    QString in_income = ui->lineEdit_5->text();
    double d_income = in_income.toDouble();


// new addition begins
    QString in_rent = ui->lineEdit_6->text();
    double d_rent = in_rent.toDouble();

    QString in_HealthInsurance = ui->lineEdit_7->text();
    double d_HealthInsurace = in_HealthInsurance.toDouble();

    QString in_CarInsurance = ui->lineEdit_8->text();
    double d_CarInsurance = in_CarInsurance.toDouble();

    QString in_Groceries = ui->lineEdit_9->text();
    double d_Groceries = in_Groceries.toDouble();

// new addtions end ( the modification were made accordingly


    double Result = d_income - (d_gas + d_electric + d_books + d_carGas);

    //ui->label_7; will show result
    QString result;

    if (Result < 0){
      result ="Your screwed! You could get another job or find a cheaper alternative way of living.";
    }
    else if (Result == 0.0){
       result = "You may survive, but not enought for food.";
    }
    else if (Result > 0 && Result < 100){
        result = "Now you can buy some \"light\" food.";
    }
    else if (Result > 100){
      result = "I guess your alright.";
    }

    ui->label_7->setText(result);



}
