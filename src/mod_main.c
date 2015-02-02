#include "../headers/mod_constr.h"
#include "../headers/mod_adj.h"
#include "../headers/mod_rc.h"
#include "../headers/mod_main.h"

int MainModule(int coeff, int a, int b) {
	float xParam = 0;
	int result = 0;

	int safeCoeff = ApplySafetyConstraints(coeff);
	int mult_result = Mult(a,b);
	int adjusted_result = AddjustUrgent(mult_result);

	xParam = (float) adjusted_result / safeCoeff;

	if(xParam >= ADMISSIBLE_LEVEL ) {
		result = 1;
	} else {
		result = 0;
	}

	return result;
}

