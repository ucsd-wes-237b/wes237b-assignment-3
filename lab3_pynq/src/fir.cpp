#include "main.h"

// ----------------------------------------------
// Run a FIR filter on the given input data
// ----------------------------------------------
void fir(float *coeffs, float *input, float *output, int length, int filterLength)
// ----------------------------------------------
{
    //TODO
}

// ----------------------------------------------
// Run a FIR filter on the given input data using Loop Unrolling
// ----------------------------------------------
void fir_opt(float *coeffs, float *input, float *output, int length, int filterLength)
// ----------------------------------------------
{
    //TODO
}

// ----------------------------------------------
// Run a FIR filter on the given input data using NEON
// ----------------------------------------------
void fir_neon(float *coeffs, float *input, float *output, int length, int filterLength)
// ----------------------------------------------
{
    //TODO
}


// ----------------------------------------------
// Create filter coefficients
// ----------------------------------------------
void designLPF(float* coeffs, int filterLength, float Fs, float Fx)
// ----------------------------------------------
{
	float lambda = M_PI * Fx / (Fs/2);

	for(int n = 0; n < filterLength; n++)
	{
		float mm = n - (filterLength - 1.0) / 2.0;
		if( mm == 0.0 ) coeffs[n] = lambda / M_PI;
		else coeffs[n] = sin( mm * lambda ) / (mm * M_PI);
	}
}
