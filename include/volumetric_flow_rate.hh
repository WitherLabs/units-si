#pragma once

#include <wither/units/si/time.hh>
#include <wither/units/si/volume.hh>

namespace units
{

using cubic_metres_per_second = impl::divide<cubic_metres, seconds>;

namespace dimensions
{

using volumetric_flow_rate = cubic_metres_per_second::magkind::dimension;

} // namespace dimensions

} // namespace units
