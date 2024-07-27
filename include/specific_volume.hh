#pragma once

#include <wither/units/si/mass.hh>
#include <wither/units/si/metric_prefixes.hh>
#include <wither/units/si/volume.hh>

namespace units
{

using cubic_metres_per_kilogram
    = impl::divide<cubic_metres, prefix::kilo<grams>>;

namespace dimensions
{

using specific_volume = cubic_metres_per_kilogram::magkind::dimension;

} // namespace dimensions

} // namespace units
