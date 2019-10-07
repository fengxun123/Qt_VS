#include "QtGuiApplication1.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
}
void QtGuiApplication1::button()
{
	QString temp;
	double a = 1.1;
	ui.label->setText(temp.setNum(a));
}