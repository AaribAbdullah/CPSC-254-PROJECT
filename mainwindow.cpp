#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "string.h"

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

    QString in_income = ui->lineEdit_5->text();     // this will be subtracted by the expenses
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

    QString in_Miscellaneous = ui->lineEdit_10->text();
    double d_Miscellaneous = in_Miscellaneous.toDouble();


    double Total_Expenses =d_gas + d_electric + d_books + d_carGas + d_rent + d_HealthInsurace + d_CarInsurance + d_Groceries + d_Miscellaneous;

    //double Result = d_income - (d_gas + d_electric + d_books + d_carGas + d_rent + d_HealthInsurace + d_CarInsurance + d_Groceries + d_Miscellaneous);

    double Result = d_income -  Total_Expenses;

    //ui->label_7; will show result
    QString result;
    QString extra, str_income, str_expenses, str_netIncome;
    str_income = QString::number(d_income);
    str_expenses = QString::number(Total_Expenses);
    str_netIncome = QString::number(Result);

    if (Result < 0){
      result ="Your screwed! \n You could get another job or find a cheaper alternative way of living.";

    }
    else if (Result == 0.0){
       result = "You may survive, but not enought for food.";
    }
    else if (Result > 0 && Result < 10){
        result = "Ok you can maybe eat.";
    }
    else if (Result > 0 && Result < 30){
        result = "You can go for light grocery shopping.";
    }
    else if (Result > 0 && Result <= 50){
      result = "I you can buy some light groceries and maybe eat out once.";
    }
    else if (Result > 0 && Result > 50){
      result = "Congratulations!\nYour circumstances allow to eat like a normal human being.";
    }

    extra = "\nIncome: " + str_income +"\nYour Expenses totaled: " + str_expenses + "\nNet Income: " + str_netIncome + '\n';
    result += extra;

    ui->label_7->setText(result);



}
