#pragma once

#include <wither/units/si/luminous_flux.hh>
#include <wither/units/si/power.hh>

namespace units
{

using lumens_per_watt = impl::divide<lumens, watts>;

namespace dimensions
{

using luminous_efficacy = lumens_per_watt::magkind::dimension;

} // namespace dimensions

} // namespace units
