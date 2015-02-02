#include "../headers/mod_rc.h"
#include "../headers/mod_adj.h"

int BuffCoefficient(int coeff);

int RefineCoefficient(int coeff) {
	int result = coeff;

	if(coeff < 10) {
		result = AddjustUrgent(coeff);
	} else if (coeff < 15){
		result = AdjustNormal(coeff);
	} else {
		// keep the coefficient unchanged
		result = BuffCoefficient(coeff);
	}

	return result;
}

// Dummy Buffer
int BuffCoefficient(int coeff) {
	int result = coeff;

	return result;
}
