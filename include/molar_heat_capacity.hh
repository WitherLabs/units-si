#pragma once

#include <wither/units/si/energy.hh>
#include <wither/units/si/substance.hh>
#include <wither/units/si/temperature.hh>

namespace units
{

using joules_per_mole_kelvin
    = impl::divide<joules, impl::multiply<moles, kelvins>>;
using joules_per_mole_celsius = impl::clone<joules_per_mole_kelvin>;

namespace dimensions
{

using molar_heat_capacity = joules_per_mole_kelvin::magkind::dimension;

} // namespace dimensions

} // namespace units
