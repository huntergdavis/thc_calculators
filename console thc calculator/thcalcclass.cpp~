#include <iostream>
#include "thcalcclass.hpp"

void thcalc::menuprint(std::string printer)
{
	std::cout << printer << std::endl;
};

void thcalc::printday()
{
	std::cout << "Day " << day << std::endl;
}

int thcalc::printdaystillclean()
{
	float current = THCcontent;
	int days = 0;
	if (current > 45)
		while (current > 45)
		{
			days++;
			float caltemp = current * .1;
			current = current - caltemp;
		}
	std::cout << days << " days till clean" << std::endl;
	return days;
}

void thcalc::processinput()
{
	switch (input)
	{
		case 2:
			history[day] = THCcontent;
			daydecrease();
			THCcontent += 100;
			day++;
			break;
		case 3:
			history[day] = THCcontent;
			daydecrease();
			day++;
			break;
		case 4:
			printhistory();
			break;
		case 5:
			passonx();
			break;
		case 6:
			manuallyenterthc();
			break;
		case 7:
			simulatexdays();
			break;
		case 8:
			daystillxpercent();
			break;
		case 9:
			running = 0;
			break;
		default:
			break;
		
	}
}
void thcalc::simulatexdays()
{
	system("clear");
	std::cout << "How many days to simulate?" << std::endl;
	int testday;
	std::cin >> testday;
	std::cout << "Smoking or Non-Smoking? Smoking = 1, NonSmoking = 2" << std::endl;
	int smokingtype;
	std::cin >> smokingtype;
	for(int i = 0;i<testday;i++)
	{
		if (smokingtype == 1)
		{
			history[day] = THCcontent;
			daydecrease();
			THCcontent += 100;
			day++;
		}
		else
		{
			history[day] = THCcontent;
			daydecrease();
			day++;
		}
	}
	std::cout << "Press enter to continue" << std::endl;
	std::cin.ignore(1,0);
	
}
void thcalc::printhistory()
{
	for (int i = 1; i < day; i++)
	{
		std::cout << "Day " << i << " , THC: " << history[i] << std::endl;
	}
	std::cout << "Press enter to continue" << std::endl;
	std::cin.ignore(1,0);
}
void thcalc::passonx()
{
	system("clear");
	std::cout << "How many days till your test?" << std::endl;
	int testday;
	std::cin >> testday;
	int realday = printdaystillclean();
	if (testday < realday)
		std::cout << "You will not pass" << std::endl;
	else
		std::cout << "You will pass" << std::endl;

	std::cout << "Press enter to continue" << std::endl;
	std::cin.ignore(1,0);
}
void thcalc::manuallyenterthc()
{
	std::cout << "Enter THC Content (1-1000)" << std::endl;
	int temp;
	std::cin >> temp;	
	THCcontent = temp;
}

void thcalc::daydecrease()
{
	float caltemp = THCcontent * .1;
	THCcontent = (int) (THCcontent - caltemp);
}

void thcalc::daystillxpercent()
{
	std::cout << "Enter a percentage to calculate to" << std::endl;
	int percentage;
	std::cin >> percentage;
	int days = 0;
	float current = THCcontent;

	if (current > percentage)
	{
		while (current > percentage)
		{
			days++;
			float caltemp = current * .1;
			current = current - caltemp;
		}
	}

	std::cout << "There are " << days << " days left till you reach that percentage" << std::endl;
	std::cout << "Press enter to continue" << std::endl;
	std::cin.ignore(1,0);

}


