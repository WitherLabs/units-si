#pragma once

#include <wither/units/si/luminous_intensity.hh>
#include <wither/units/si/solid_angle.hh>

namespace units
{

using lumens = impl::multiply<candelas, steradians>;

namespace dimensions
{

using luminous_flux = lumens::magkind::dimension;

} // namespace dimensions

} // namespace units
