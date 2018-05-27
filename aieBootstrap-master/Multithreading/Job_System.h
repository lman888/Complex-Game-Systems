#pragma once
#include <iostream>
#include <mutex>
#include <condition_variable>
#include <vector>
#include "Workers.h"

class Job_System : public Workers
{
public:
	Job_System();
	~Job_System();
	
	void AddJob(int(*Fpt));
	void ExecuteJob();

	std::vector<int> jobs;
	std::mutex jobMutex;
	std::condition_variable cv;
};

