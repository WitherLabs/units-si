#pragma once

#include <wither/units/si/energy.hh>
#include <wither/units/si/temperature.hh>

namespace units
{

using joules_per_kelvin  = impl::divide<joules, kelvins>;
using joules_per_celsius = impl::clone<joules_per_kelvin>;

namespace dimensions
{

using heat_capacity = joules_per_kelvin::magkind::dimension;

} // namespace dimensions

} // namespace units
