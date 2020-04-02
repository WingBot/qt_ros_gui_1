#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    //system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roslaunch micros_storage storage_node.launch'&");
    //system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roscore'&");
    system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roslaunch usb_cam usb_cam-test.launch'&");
    //exit(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roscore'&");
    //exit(0);
}

void MainWindow::on_pushButton_3_clicked()
{
    //system("gnome-terminal -x bash -c 'echo OK' ");
    system("gnome-terminal -x bash -c 'echo 'OK'; read' ");
}
