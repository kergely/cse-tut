/*! \file func.cpp
*   \brief The file for various mathematical functions
*/

#include "func.hpp"
#include <math.h> 




/*!
 * \brief Evaluate a function problem

 * Evaluates a polinomial entered as a vector. The evaluation happens as:
 * \f[ f(x) = \sum_{i=0}^n a_i x^i  \f]

 * \param x [in] The evaluation location
 * \param multipl [in] The multipliers, in increasing order
 * \return The evaluated polinomial value
*/
double Polinom(double  x, const std::vector<double>& multipl)
{
	double sum = 0;
	for (std::size_t i = 0; i < multipl.size(); ++i) {
		sum += pow(x, i)*multipl[i];
	}
	return sum;
}

