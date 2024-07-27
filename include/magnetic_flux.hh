#pragma once

#include <wither/units/si/time.hh>
#include <wither/units/si/voltage.hh>

namespace units
{

using webers = impl::multiply<volts, seconds>;

namespace dimensions
{

using magnetic_flux = webers::magkind::dimension;

} // namespace dimensions

} // namespace units
