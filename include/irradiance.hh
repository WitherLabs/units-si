#pragma once

#include <wither/units/si/area.hh>
#include <wither/units/si/power.hh>

namespace units
{

using watts_per_square_metre = impl::divide<watts, square_metres>;

namespace dimensions
{

using irradiance = watts_per_square_metre::magkind::dimension;

} // namespace dimensions

} // namespace units
