#pragma once

#include <wither/units/si/charge.hh>
#include <wither/units/si/mass.hh>
#include <wither/units/si/metric_prefixes.hh>

namespace units
{

using coulombs_per_kilogram = impl::divide<coulombs, prefix::kilo<grams>>;

namespace dimensions
{

using exposure = coulombs_per_kilogram::magkind::dimension;

} // namespace dimensions

} // namespace units
