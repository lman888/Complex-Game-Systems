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
		myThread = std::thread([&]
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
		});	///End of Lambda

		myThread.join();
	}
}

void Job_System::JobTwo(std::string sentence)
{
	myThread = std::thread([&]
	{
		printf("Hello i am a boi\n");
		printf("What is your name?\n");
		
		std::cout << sentence << std::endl;
	});

	myThread.join();
}

void Job_System::TestJob()
{
	std::thread worker;
}


