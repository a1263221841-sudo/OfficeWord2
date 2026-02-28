#ifndef MYWORD_H
#define MYWORD_H

#include <QMainWindow>

//第二步:添加相关头文件
#include <QPrintDialog>
#include <QPrinter>
#include <QPrintPreviewDialog>

class MyChild;

// QAction被创建了，那么就必须将它添加到相关的菜单和工具栏上，然后将它们链接到实现相应action功能的槽函数
class QAction;

// QMenuBar是菜单栏，QMenu是菜单，菜单QMenu是挂载在菜单栏QMenuBar上的，相当于菜单栏QMenuBar是一个容器，
// 菜单QMenu是容器中的其中一项，或者说QMenuBar内的子集全部是菜单QMenu
class QMenu;

// QComboBox提供了一种向用户呈现选项列表的方式，以占用最少的屏幕空间。 组合框是一个显示当前项目的选择小部件，可以弹出可选择项目的列表。
// 组合框可以是可编辑的，允许用户修改列表中的每个项目。 QComboBox 除了显示可见下拉列表外，
// 每个项（item，或称列表项）还可以关联一个 QVariant 类型的变量，用于存储一些不可见数据。
class QComboBox;

// QFontComboBox 字体下拉列表框,QFontComboBox()是QComboBox()的一个子类，但是它的内容是不能被编辑的，主要是用来选择字体。
class QFontComboBox;

// QMdiArea（Multiple Document Interface Area）提供了一个可以同时显示多个文档窗口的区域。
// 本质上来说，QMdiArea就像是多文档窗口的窗口管理器。例如，它将它所管理的窗口绘制在它上面，并且以级联或者平铺的方式放置这些窗口。
// 通常情况下，QMdiArea用作QMainWindow的中心控件，以此来创建一个MDI应用程序。但是，它也可以被放置在任何布局类中。
// QMdiArea支持所有的窗口标志，只要这些窗口标志被当前控件样式支持。
// QMdiArea中的子窗口是QMdiSubWindow的实例化对象。通过调用addSubWindow来将他们加入MDI区域。
// 通常情况下是传递一个QWidget作为内部控件给这个函数。但是直接传递QMdiSubWindow也是可以的。
class QMdiArea;

// 大多数复杂的程序，都使用MDI框架，在Qt designer中可以直接将控件MDI Area拖入使用。
// QMdiArea一般使用于主窗口中，用于容纳多个子窗口QMdiSubWindow
class QMdiSubWindow;

// QSignalMapper类收集了一系列的无参信号，然后使用相对于信号发送者来说的整数、字符串或控件参数来重新发送它们。
// QSignalMapper类可以看成是信号的翻译和转发器。
class QSignalMapper;

class Myword : public QMainWindow
{
    Q_OBJECT

public:
    Myword(QWidget *parent = nullptr);
    ~Myword();

protected:
    // QCloseEvent事件是指，当你鼠标点击窗口右上角的关闭按钮时，所触发的函数.如果你没有重写virtual closeEvent(QCloseEvent*event);这个虚函数的话，
    // 系统是默认接受关闭事件的，所以就会关闭窗体，

    void closeEvent(QCloseEvent *event); //可以通过参数event来控制是否让窗体关闭
private slots:
    void fileNew();//新建
    void fileOpen();//打开
    void fileSave();//保存
    void fileSaveAs(); //另存为
    void filePrint();//打印
    void filePrintPreview();//文件打印预览
    void printPreviw(QPrinter*);//打印预览

    void undo();//撤销
    void redo();//重做
    void cut();//剪切
    void copy();//复制
    void paste();//粘贴

    void about();//关于

    void textBold();//加粗
    void textItalic()
};

#endif // MYWORD_H
