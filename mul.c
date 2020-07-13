#include "mul.h"

mclx mul (mclx a, mclx b)
{
	mclx result;
	result.re = a.re * b.re - a.im * b.im;
	result.im = a.re * b.im + a.im * b.re;
	return result;
}
