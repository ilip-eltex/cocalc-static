#include "add.h"

mclx add (mclx a, mclx b)
{
	mclx result;
	result.re = a.re + b.re;
	result.im = a.im + b.im;
	return result;
}
