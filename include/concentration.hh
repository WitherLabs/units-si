#pragma once

#include <wither/units/si/substance.hh>
#include <wither/units/si/volume.hh>

namespace units
{

using mole_per_cubic_metre = impl::divide<moles, cubic_metres>;

namespace dimensions
{

using concentration = mole_per_cubic_metre::magkind::dimension;

} // namespace dimensions

} // namespace units
