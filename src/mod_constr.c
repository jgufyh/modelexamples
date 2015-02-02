#include "../headers/mod_constr.h"
#include "../headers/mod_rc.h"

int ApplySafetyConstraints(int coeff) {
	int temp = 0;
	int result = 0;

	temp = coeff >> 2;

	if(result > MAX_COEF) {
		temp = MAX_COEF;
	}

	result = RefineCoefficient(temp);

	return result;
}

