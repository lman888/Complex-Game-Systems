#pragma once
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>


class Job_System
{
public:
	Job_System();
	~Job_System();

	void System();

private:

	float num = 1;

	std::vector<Job_System> list;

	std::thread thread1;
	std::thread thread2;
	std::thread thread3;
};

