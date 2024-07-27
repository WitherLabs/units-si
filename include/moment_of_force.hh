#pragma once

#include <wither/units/si/force.hh>
#include <wither/units/si/length.hh>

namespace units
{

using netwon_metres = impl::multiply<newtons, metres>;

namespace dimensions
{

using moment_of_force = netwon_metres::magkind::dimension;

} // namespace dimensions

} // namespace units
