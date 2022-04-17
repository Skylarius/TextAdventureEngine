#pragma once
#include <iostream>
using namespace std;
class Context
{
public:
	Context();
	void SetProjectName(char* projectName);
	string GetProjectName();
private:
	string projectName;
};

