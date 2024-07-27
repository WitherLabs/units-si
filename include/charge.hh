#pragma once

#include <wither/units/si/current.hh>
#include <wither/units/si/time.hh>

namespace units
{

using coulombs = impl::multiply<amperes, seconds>;

namespace dimensions
{

using charge = coulombs::magkind::dimension;

} // namespace dimensions

} // namespace units
