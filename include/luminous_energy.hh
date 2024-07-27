#pragma once

#include <wither/units/si/luminous_flux.hh>
#include <wither/units/si/time.hh>

namespace units
{

using lumen_second = impl::multiply<lumens, seconds>;

namespace dimensions
{

using luminous_energy = lumen_second::magkind::dimension;

} // namespace dimensions

} // namespace units
