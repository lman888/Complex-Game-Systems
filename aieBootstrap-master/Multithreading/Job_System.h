#pragma once
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include "Workers.h"



class Job_System
{
public:
	Job_System();
	~Job_System();

	void JobOne(std::thread *thread);

private:
	
	Workers workers;						///Calls the Worker Class
	
	std::mutex  guard;						///Locks and Unlocks our Threads
	std::thread thread;						///First Thread

};

