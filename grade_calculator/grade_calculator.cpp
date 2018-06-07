#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
    //Update overall based on signal of each spinbox
    QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_2,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_3,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_4,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_5,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_6,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_7,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_8,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_9,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_10,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_11,SIGNAL(valueChanged(int)),
                     this, SLOT(update_overall(int)));

    //Connect spinBox to the horizontalSlider
    QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_2,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_2, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_3,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_3, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_4,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_4, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_5,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_5, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_6,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_6, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_7,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_7, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_8,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_8, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_9,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_9, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_10,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_10, SLOT(setValue(int)));
    QObject::connect(ui->spinBox_11,SIGNAL(valueChanged(int)),
                     ui->horizontalSlider_11, SLOT(setValue(int)));
    //The other way around.
    QObject::connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
                     ui->spinBox, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_2,SIGNAL(valueChanged(int)),
                     ui->spinBox_2, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_3,SIGNAL(valueChanged(int)),
                     ui->spinBox_3, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_4,SIGNAL(valueChanged(int)),
                     ui->spinBox_4, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_5,SIGNAL(valueChanged(int)),
                     ui->spinBox_5, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_6,SIGNAL(valueChanged(int)),
                     ui->spinBox_6, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_7,SIGNAL(valueChanged(int)),
                     ui->spinBox_7, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_8,SIGNAL(valueChanged(int)),
                     ui->spinBox_8, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_9,SIGNAL(valueChanged(int)),
                     ui->spinBox_9, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_10,SIGNAL(valueChanged(int)),
                     ui->spinBox_10, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_11,SIGNAL(valueChanged(int)),
                     ui->spinBox_11, SLOT(setValue(int)));
}

grade_calculator::~grade_calculator()
{
    delete ui;
}

void grade_calculator::update_overall(int unused){
    double score; //= static_cast<double>(unused);
    double h1 = ui->spinBox->value();
    double h2 = ui->spinBox_2->value();
    double h3 = ui->spinBox_3->value();
    double h4 = ui->spinBox_4->value();
    double h5 = ui->spinBox_5->value();
    double h6 = ui->spinBox_6->value();
    double h7 = ui->spinBox_7->value();
    double h8 = ui->spinBox_8->value();
    score = (h1 + h2 + h3 + h4 + h5 + h6 + h7 + h8) * 0.25;

    ui->label_14->setText(QString::number(score));
    return;
}
