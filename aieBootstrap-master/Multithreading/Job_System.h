#pragma once
#include <iostream>
#include <thread>
#include <mutex>
#include <string>
#include <condition_variable>

#include "requests.h"

class Job_System : public requests 
{
public:
	Job_System();
	~Job_System();
	

	void process();
	void finish();

	std::thread jobThread;
	std::mutex jobMutex;
	std::condition_variable cv;
};

