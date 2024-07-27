#pragma once

#include <wither/units/si/electrical_resistance.hh>

namespace units
{

using siemens = impl::reciprocal<ohms>;

namespace dimensions
{

using electrical_conductance = siemens::magkind::dimension;

} // namespace dimensions

} // namespace units
