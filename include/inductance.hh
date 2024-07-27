#pragma once

#include <wither/units/si/magnetic_flux.hh>

namespace units
{

using henries = impl::divide<webers, amperes>;

namespace dimensions
{

using inductance = henries::magkind::dimension;

} // namespace dimensions

} // namespace units
