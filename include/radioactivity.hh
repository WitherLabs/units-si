#pragma once

#include <wither/units/si/time.hh>

namespace units
{

using becquerels = impl::reciprocal<seconds>;

namespace dimensions
{

using radioactivity = becquerels::magkind::dimension;

} // namespace dimensions

} // namespace units
