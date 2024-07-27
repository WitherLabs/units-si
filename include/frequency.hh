#pragma once

#include <wither/units/si/time.hh>

namespace units
{

using hertz = impl::reciprocal<seconds>;

namespace dimensions
{

using frequency = hertz::magkind::dimension;

} // namespace dimensions

} // namespace units
