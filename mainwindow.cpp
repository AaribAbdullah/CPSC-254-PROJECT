#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : /* This is a function that is calling another file to get the GUI*/
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() // This is the destructor, it ends the program
{
    delete ui; // deletes ui which means it ends the program
}

void MainWindow::on_pushButton_clicked() // The inputs to the program is here
{
    QString in_gas = ui->lineEdit->text(); // This is where the user type in information about gas bill into the field
    double d_gas = in_gas.toDouble(); // converts that string into a double


    QString in_electric = ui->lineEdit_2->text(); // User puts infomration for electric bill in string into the field
    double d_electric = in_electric.toDouble(); // converts the string into a double

    QString in_books = ui->lineEdit_3->text(); // User inputs costs for books in string into the field
    double d_books = in_books.toDouble(); // converts the string into the double


    QString in_carGas = ui->lineEdit_4->text(); // User input the Gas/Petrol for Car into the field
    double d_carGas = in_carGas.toDouble(); // Coverting Stringo into Double

    QString in_income = ui->lineEdit_5->text(); // Inputs income into the field for income
    double d_income = in_income.toDouble(); // Converts String into a double



// ABOVE ARE WHAT THE USER IS INPUTTING THE EXPENSES FOR US TO CALCULATE





    double Result = d_income - (d_gas + d_electric + d_books + d_carGas); 
// IN THE CODE ABOVE, WE DECLAR A VARIABLE CALLED RESULT AND MAKE IT SET EQUAL TO INCOME SUBTRACTED BY THE EXPENSES ENTERED BY THE USER
    //ui->label_7; will show result
    QString result; // We have a string which we can output

    if (Result < 0){ // based on the Result we would get differetn outcomes in this if-else statement
      result ="Your screwed! You could get another job or find a cheaper alternative way of living."; 
    } // If the Result is less than 0, then it tells the user that expenses are out of control
    else if (Result == 0.0){ // 
       result = "You may survive, but not enought for food."; // If result = 0, then we tell him he may survive, but not enough money for food
    }
    else if (Result > 0 && Result < 100){
        result = "Now you can buy some \"light\" food."; // If Result is greater than 0, we tell the user he/she can buy some food
    }
    else if (Result > 100){
      result = "I guess your alright."; // if result is greater than 100, we say they are fine and are well out
    }

    ui->label_7->setText(result); // The results above will be outputted



}
