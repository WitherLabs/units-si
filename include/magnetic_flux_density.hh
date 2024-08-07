#pragma once

#include <wither/units/si/area.hh>
#include <wither/units/si/magnetic_flux.hh>

namespace units
{

using teslas = impl::divide<webers, square_metres>;

namespace dimensions
{

using magnetic_flux_density = teslas::magkind::dimension;

} // namespace dimensions

} // namespace units
