#pragma once

#include <wither/units/si/charge.hh>
#include <wither/units/si/energy.hh>

namespace units
{

using volts = impl::divide<joules, coulombs>;

namespace dimensions
{

using voltage = volts::magkind::dimension;

} // namespace dimensions

} // namespace units
