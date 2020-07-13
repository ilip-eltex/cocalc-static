#include "div.h"

mclx div (mclx a, mclx b)
{
	mclx result = {0, 0};
	double k = b.re * b.re + b.im * b.im;
	result.re = (a.re * b.re - a.im * b.im) / k;
	result.im = (a.re * b.im + a.im * b.re) / k;
	return result;
}
