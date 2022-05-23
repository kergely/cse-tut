/*! \file func.hpp
*   \brief The source file for various physical calculations
*/

#include "physics.hpp"

valueWithUnit::valueWithUnit(double _value){
    value = _value;
    unit[0] = 0.0; //[0.0 0.0 0.0 0.0 0.0 0.0 0.0];
}