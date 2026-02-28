#include "myword.h"

#include"mychild.h"
#include<QtWidgets>
const QString srcpaths = ":/new/prefix1/images";
Myword::Myword(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowIcon(QIcon(":/new/prefix1/images/wordlogo2."))
}

Myword::~Myword()
{
}

