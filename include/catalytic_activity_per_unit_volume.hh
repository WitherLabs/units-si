#pragma once

#include <wither/units/si/catalytic_activity.hh>
#include <wither/units/si/volume.hh>

namespace units
{

using katals_per_cubic_metre = impl::divide<katals, cubic_metres>;

namespace dimensions
{

using catalytic_activity_per_unit_volume
    = katals_per_cubic_metre::magkind::dimension;

} // namespace dimensions

} // namespace units
