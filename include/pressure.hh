#pragma once

#include <wither/units/si/area.hh>
#include <wither/units/si/force.hh>

namespace units
{

using pascals = impl::divide<newtons, square_metres>;

namespace dimensions
{

using pressure = pascals::magkind::dimension;

} // namespace dimensions

} // namespace units
