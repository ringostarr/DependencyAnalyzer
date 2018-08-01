// DepAnal
#define _CRT_SECURE_NO_WARNINGS
#include "DepAnal.h"

#ifdef TEST_DEPANAL
TypeAnal abc()
{
	return null;
}
int main()
{
	TypeAnal x;
	std::vector<std::string> fp;
	std::string y=FileSystem::Path::GetFullFilespec("Actionsandrules.h");
	fp.push_back(y);
	x.doTypeAnal(y);

}
#endif
