#include "Context.h"

Context::Context() {
	cout << "Creating context";
}

void Context::SetProjectName(char* projectName)
{
	this->projectName = projectName;
}

string Context::GetProjectName()
{
	return string(this->projectName);
}
