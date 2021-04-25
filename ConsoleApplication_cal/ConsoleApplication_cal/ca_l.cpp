#include "ca_l.h"

float ca_l::calculate(float x, char oper, float y)
{
	switch (oper)
	{
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '/':
		return x / y;
		break;
	default:
		return 0.0;
	}
	return 0.0f;
}
