#pragma once

#include <wither/units/si/mass.hh>
#include <wither/units/si/metric_prefixes.hh>
#include <wither/units/si/volume.hh>

namespace units
{

using kilograms_per_cubic_metre
    = impl::divide<prefix::kilo<grams>, cubic_metres>;

namespace dimensions
{

using density = kilograms_per_cubic_metre::magkind::dimension;

} // namespace dimensions

} // namespace units
