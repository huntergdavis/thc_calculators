#include <iostream>
#include "thcalcclass.hpp"

int main()
{
	thcalc mainTHClass;
	mainTHClass.running = 1;
	mainTHClass.day = 1;
	mainTHClass.THCcontent = 0;

	while (mainTHClass.running == 1)
	{
		system("clear");
		mainTHClass.input = 0;
		mainTHClass.printday();
		int a = mainTHClass.printdaystillclean();
		std::cout << mainTHClass.THCcontent << "% THC Content\n";
		mainTHClass.menuprint("------------------------------");
		mainTHClass.menuprint("Smoking Day                - 2");
		mainTHClass.menuprint("Non-Smoking Day            - 3");
		mainTHClass.menuprint("Print History              - 4");
		mainTHClass.menuprint("Will I Pass on Day X?      - 5");
		mainTHClass.menuprint("Manually Enter THC Content - 6");
		mainTHClass.menuprint("Simulate X Days            - 7");
		mainTHClass.menuprint("Days till x percentage?    - 8");
		mainTHClass.menuprint("Exit                       - 9");
		mainTHClass.menuprint("------------------------------");
		std::cin >> mainTHClass.input;
		mainTHClass.processinput();
	}


}


