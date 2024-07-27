#pragma once

#include <wither/units/si/energy.hh>
#include <wither/units/si/time.hh>

namespace units
{

using joule_seconds = impl::multiply<joules, seconds>;

namespace dimensions
{

using angular_momentum = joule_seconds::magkind::dimension;

} // namespace dimensions

} // namespace units
