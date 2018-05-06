#include "Job_System.h"



Job_System::Job_System()
{
}


Job_System::~Job_System()
{
}

void Job_System::JobOne(int num)
{
	if (numberCount < num)
	{
		///Start of Lambda
		workerThread = std::thread([&]
		{
			if (numberCount != num)
			{
				isTaskRunning = true;
				while (isTaskRunning == true)
				{
					std::cout << numberCount << std::endl;
					numberCount++;

					if (numberCount == num)
					{
						numberCount++;
						isTaskRunning = false;
					}
				}
			}
		});

		workerThread.join();
	}
}

void Job_System::JobTwo(std::string sentence)
{
	workerThread = std::thread([&] 
	{
		printf("Hello my name is Thread\n");
		printf("What is your name?\n");
		
		std::cout << sentence << std::endl;
	});

	workerThread.join();
}

void Job_System::Timer()
{
	workerThread = std::thread([]
	{
		int timer;
	});
}


