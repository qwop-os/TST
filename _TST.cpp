#include <iostream>
#include "_TST.h"

void _TST::SetMember(int _a)
{
	a = _a;
}
int _TST::GetMember()
{
	return a;
}

int main()
{
	_TST st;
	st.SetMember(3);
	
	std::cout<<st.GetMember();
	return 0;
}
