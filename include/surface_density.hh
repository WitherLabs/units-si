#pragma once

#include <wither/units/si/area.hh>
#include <wither/units/si/mass.hh>
#include <wither/units/si/metric_prefixes.hh>

namespace units
{

using kilograms_per_square_metre
    = impl::divide<prefix::kilo<grams>, square_metres>;

namespace dimensions
{

using surface_density = kilograms_per_square_metre::magkind::dimension;

} // namespace dimensions

} // namespace units
