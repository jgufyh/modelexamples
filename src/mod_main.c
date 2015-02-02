#include "../headers/mod_constr.h"
#include "../headers/mod_adj.h"
#include "../headers/mod_rc.h"

int MainModule(int coeff, int a, int b) {
	int coef = 10;
	float xParam = 0;
	int result = 0;

	int safeCoef = ApplySafetyConstraints(coef);
	int mult_result = Mult(a,b);
	int adjusted_result = AddjustUrgent(mult_result);

	xParam = (float) adjusted_result / safeCoef;

	if(xParam >= 1 ) {
		result = 1;
	} else {
		result = 0;
	}

	return result;
}

