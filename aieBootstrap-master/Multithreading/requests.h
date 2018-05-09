#pragma once


class requests
{
	virtual void setValue(int value) = 0;
	virtual void process() = 0;
	virtual void finish() = 0;
};