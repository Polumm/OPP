#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <math.h>
#include <QPainter>
#include <QMouseEvent>
#include <QDebug>
#include <QMainWindow>
#include <Windows.h>
#include <winddi.h>
#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8

//#pragma comment  (lib, "User32.lib")
//#pragma comment  (lib, "gdi32.lib")

//#include <QColor>
//#include <QScreen>
//#include <QPixmap>
//#include <QScreen>
//#include <QApplication>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QPointF mouse;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector<QPointF> already = {QPointF(439, 177)};
    int xxx = 0;
    bool IsPoint(QPointF center, QPointF mouse);//捕捉点，允许点击误差
    bool OnSegement(QPointF p1, QPointF p2, QPointF mouse);//捕捉线
    bool IsPointInPolygon(QPointF& vtPoint, QVector<QPointF>& vecPoints);//捕捉多边形

    void BoundarySeedFill(int x, int y, QColor new_color, QVector<QPointF>& vecPoints);

    void SetPixelColor(int x, int y, QColor new_color);

    //    QColor GetPixelColor(int x, int y){
    //        //QString text;
    //        QScreen *screen = QGuiApplication::primaryScreen();
    //        QPixmap p = screen->grabWindow();
    //        QImage image = p.toIzzzmage();
    //        QColor color = image.pixel(x, y);
    //        return color;
    //        //return text = QString("RGB: %1, %2, %3").arg(color.red()).arg(color.green()).arg(color.blue());
    //    }

    void init7(); //初始化裁剪矩形框

    int encode(int x,int y,int XL,int XR,int YB,int YT);//Cohen_Sutherland编码

    void Cohen_Sutherland(int x1,int y1,int x2,int y2,int XL=200,int XR=500,int YB=150,int YT=300);

protected:
    QVector<QVector<int> > direction_8 = {{-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1} };
    int menu = 0;
    int count = 0;
    int startX = 0;
    int startY = 0;
    int endX = 0;
    int endY = 0;

    //DDA数据成员
    //length必须是浮点数，不然整数除以整数变成整除了，斜率就会出问题


    //中点画圆数据成员

    void DDA_Line();
    void MPL();
    void MPC();
    void IdentifyObject(QPointF mouse);
    void FillAlgorithm(QPointF mouse);
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* e);
    void complete_circle(int x, int y);

private slots:
    void on_actionDDA_triggered();

    void on_action_MPL_triggered();

    void on_actionMPC_triggered();

    void on_actionIdentifyObjects_triggered();

    void on_actionBoundary_Fill_Algorithm_triggered();

    void on_actionCohen_Sutherland_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
