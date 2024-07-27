#pragma once

#include <wither/units/si/force.hh>
#include <wither/units/si/length.hh>

namespace units
{

using joules = impl::multiply<newtons, metres>;

namespace dimensions
{

using energy = joules::magkind::dimension;

} // namespace dimensions

} // namespace units
