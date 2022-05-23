/*! \file func.hpp
*   \brief The header file for various physical calculations
*/

#include <vector>

/*! \brief A class for containing values with units 

    This class is a simple setup of an actual value, and an array of the powers on the seven SI base units.
*/
class valueWithUnit
{
    private:
        double value; //!< The value of the actual value
        double unit[7]; //!< The powers of the base seven units
    public:
        valueWithUnit(double _value); //!< constructor
        ~valueWithUnit(); //<destructor

};
