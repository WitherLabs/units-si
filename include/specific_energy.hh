#pragma once

#include <wither/units/si/energy.hh>
#include <wither/units/si/mass.hh>

namespace units
{

using joules_per_kilogram = impl::divide<joules, prefix::kilo<grams>>;

namespace dimensions
{

using specific_energy = joules_per_kilogram::magkind::dimension;

} // namespace dimensions

} // namespace units
