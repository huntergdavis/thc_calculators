#include "mainwindowimpl.h"
//
MainWindowImpl::MainWindowImpl( QWidget * parent, Qt::WFlags f) 
	: QMainWindow(parent, f)
{	
	thcContent = 0;
	day = 1;
	setupUi(this);
	connect(enterContentButton,SIGNAL(clicked()),this,SLOT(manuallyEnterContent()));
	connect(simulateButton,SIGNAL(clicked()),this,SLOT(simulateXDays()));
	connect(smokeButton,SIGNAL(clicked()),this,SLOT(smokeDay()));
	connect(nonSmokeButton,SIGNAL(clicked()),this,SLOT(nonSmokeDay()));
	connect(daysTillButton,SIGNAL(clicked()),this,SLOT(daysTillXPercentage()));
	connect(clearButton,SIGNAL(clicked()),this,SLOT(clearTill()));
	
	
	addHistory();
	calculateDaysTillPass();
}
void MainWindowImpl::manuallyEnterContent()
{
	thcContent = contentSpinBox->value();
	percentLcdNumber->display(thcContent);
	addHistory();
	calculateDaysTillPass();
}
void MainWindowImpl::simulateXDays()
{
	bool smokeChecked = smokeCheckBox->isChecked();
	int  spinBoxDays = simulateSpinBox->value();
	
	for(int i = 0; i < spinBoxDays;i++)
	{
		day++;
		float caltemp = thcContent * .1;
		
    	thcContent = (int) (thcContent - caltemp);
    	if(smokeChecked == 1)
    		thcContent += 100;
    		
    	addHistory();
	}
	
	calculateDaysTillPass();
	percentLcdNumber->display(thcContent);
	dayLcdNumber->display(day);
	
}
void MainWindowImpl::smokeDay()
{
	day++;
	float caltemp = thcContent * .1;
    thcContent = (int) (thcContent - caltemp);
    thcContent += 100;

	addHistory();
	calculateDaysTillPass();
	percentLcdNumber->display(thcContent);
	dayLcdNumber->display(day);
	
	
}
void MainWindowImpl::nonSmokeDay()
{	
	day++;
	float caltemp = thcContent * .1;
    thcContent = (int) (thcContent - caltemp);
    
	addHistory();    
    calculateDaysTillPass();
	percentLcdNumber->display(thcContent);
	dayLcdNumber->display(day);	
}

void MainWindowImpl::daysTillXPercentage()
{
	bool smokeChecked = tillSmokeCheckBox->isChecked();
	int  spinBoxPercent = daysTillSpinBox->value();
	
	float current = thcContent;
	int days = 0;
	if(smokeChecked == 0)
	{
		
		if (current > spinBoxPercent)
		{     
			while (current > spinBoxPercent)
	        {
	                days++;
	                float caltemp = current * .1;
	                current = current - caltemp;
	        }
    	}
   	}
   	else
   	{
  		if (current < spinBoxPercent)
		{     
			while (current < spinBoxPercent)
	        {
	                days++;
	                float caltemp = current * .1;
	                current = current - caltemp;
	                current += 100;
	        }
    	} 		
  	}
    
    daysTillLcdNumber->display(days);
}

void MainWindowImpl::addHistory()
{
	QString historyText = "Day ";
	historyText += QString::number(day);
	historyText += " , ";
	historyText += QString::number(thcContent);
	historyText += " percent.";
	historyListWidget->insertItem(0,historyText);
}

void MainWindowImpl::calculateDaysTillPass()
{
	int current = thcContent;
	int days = 0;
	if (thcContent > 45)
	{
    	while (current > 45)
        {
        	days++;
            float caltemp = current * .1;
            current = (int) (current - caltemp);
        }
    }
    passLcdNumber->display(days);
}
void MainWindowImpl::clearTill()
{
	daysTillLcdNumber->display(0);
}
//
