#pragma once

#include <wither/units/si/pressure.hh>
#include <wither/units/si/time.hh>

namespace units
{

using pascal_seconds = impl::multiply<pascals, seconds>;

namespace dimensions
{

using dynamic_viscosity = pascal_seconds::magkind::dimension;

} // namespace dimensions

} // namespace units
