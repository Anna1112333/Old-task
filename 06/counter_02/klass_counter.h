#pragma once
class counter
{
public:

	void cases(char sign);
	
private:
	int number;
	int close = 0;
	void add();
	
	void subtract();
	
	void exit();
	
	void equal();
	
public:
	void be_done();
	
};
