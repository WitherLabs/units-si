#pragma once

#include <wither/units/si/plane_angle.hh>
#include <wither/units/si/time.hh>

namespace units
{

using radians_per_second_squared = impl::divide<radians, impl::square<seconds>>;

namespace dimensions
{

using angular_acceleration = radians_per_second_squared::magkind::dimension;

} // namespace dimensions

} // namespace units
