#pragma once

#include <wither/units/si/energy.hh>
#include <wither/units/si/mass.hh>
#include <wither/units/si/temperature.hh>

namespace units
{

using joules_per_kilogram_kelvin
    = impl::divide<joules, impl::multiply<prefix::kilo<grams>, kelvins>>;
using joules_per_kilogram_celsius = impl::clone<joules_per_kilogram_kelvin>;

namespace dimensions
{

using specific_entropy = joules_per_kilogram_kelvin::magkind::dimension;

} // namespace dimensions

} // namespace units
