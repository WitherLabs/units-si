#pragma once

#include <wither/units/si/mass.hh>
#include <wither/units/si/metric_prefixes.hh>
#include <wither/units/si/velocity.hh>

namespace units
{

using kilogram_metres_per_second
    = impl::multiply<prefix::kilo<grams>, metres_per_second>;

namespace dimensions
{

using momentum = kilogram_metres_per_second::magkind::dimension;

} // namespace dimensions

} // namespace units
