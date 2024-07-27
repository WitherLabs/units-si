#pragma once

#include <wither/units/si/power.hh>
#include <wither/units/si/solid_angle.hh>

namespace units
{

using watts_per_square_metre_steradian
    = impl::divide<watts, impl::multiply<square_metres, steradians>>;

namespace dimensions
{

using radiance = watts_per_square_metre_steradian::magkind::dimension;

} // namespace dimensions

} // namespace units
