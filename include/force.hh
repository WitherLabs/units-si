#pragma once

#include <wither/units/si/acceleration.hh>
#include <wither/units/si/mass.hh>
#include <wither/units/si/metric_prefixes.hh>

namespace units
{

using newtons = impl::multiply<prefix::kilo<grams>, metres_per_second_squared>;

namespace dimensions
{

using force = newtons::magkind::dimension;

} // namespace dimensions

} // namespace units
