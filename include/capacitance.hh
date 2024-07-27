#pragma once

#include <wither/units/si/charge.hh>
#include <wither/units/si/voltage.hh>

namespace units
{

using farads = impl::divide<coulombs, volts>;

namespace dimensions
{

using capacitance = farads::magkind::dimension;

} // namespace dimensions

} // namespace units
