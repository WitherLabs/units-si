#pragma once

#include <wither/units/si/energy.hh>
#include <wither/units/si/volume.hh>

namespace units
{

using joule_per_cubic_metre = impl::divide<joules, cubic_metres>;

namespace dimensions
{

using energy_density = joule_per_cubic_metre::magkind::dimension;

} // namespace dimensions

} // namespace units
