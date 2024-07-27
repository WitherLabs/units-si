#pragma once

#include <wither/units/si/length.hh>
#include <wither/units/si/time.hh>

namespace units
{

using metres_per_second = impl::divide<metres, seconds>;

namespace dimensions
{

using velocity = metres_per_second::magkind::dimension;

} // namespace dimensions

} // namespace units
