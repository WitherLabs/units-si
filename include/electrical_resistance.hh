#pragma once

#include <wither/units/si/current.hh>
#include <wither/units/si/voltage.hh>

namespace units
{

using ohms = impl::divide<volts, amperes>;

namespace dimensions
{

using electrical_resistance = ohms::magkind::dimension;

} // namespace dimensions

} // namespace units
