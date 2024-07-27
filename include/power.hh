#pragma once

#include <wither/units/si/energy.hh>
#include <wither/units/si/time.hh>

namespace units
{

using watts = impl::divide<joules, seconds>;

namespace dimensions
{

using power = watts::magkind::dimension;

} // namespace dimensions

} // namespace units
