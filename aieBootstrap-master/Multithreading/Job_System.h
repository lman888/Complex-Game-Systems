#pragma once
#include <iostream>
#include <thread>
#include <mutex>
#include "Workers.h"
#include <string>



class Job_System
{
public:
	Job_System();
	~Job_System();

	void JobOne(int num);
	void JobTwo(std::string sentence);
	void TestJob();


private:
	
	int numberCount = 0;
	std::mutex myMutex;				///Creates mutex
	std::thread myThread;			///Creates a thread
	bool isTaskRunning;
	
};

