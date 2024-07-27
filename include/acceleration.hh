#pragma once

#include <wither/units/si/velocity.hh>

namespace units
{

using metres_per_second_squared = impl::divide<metres_per_second, seconds>;

namespace dimensions
{

using acceleration = metres_per_second_squared::magkind::dimension;

} // namespace dimensions

} // namespace units
