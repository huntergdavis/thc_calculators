#ifndef MAINWINDOWIMPL_H
#define MAINWINDOWIMPL_H
//
#include "ui_mainwindow.h"
//
class MainWindowImpl : public QMainWindow, public Ui::MainWindow
{
Q_OBJECT
public:
	MainWindowImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
	void	 calculateDaysTillPass();
	void addHistory();
private:
	int thcContent;
	int day;
private slots:
	void manuallyEnterContent();
	void simulateXDays();
	void smokeDay();
	void nonSmokeDay();
	void daysTillXPercentage();
	void clearTill();
};
#endif




