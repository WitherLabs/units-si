#pragma once

#include <wither/units/si/substance.hh>
#include <wither/units/si/time.hh>

namespace units
{

using katals = impl::divide<moles, seconds>;

namespace dimensions
{

using catalytic_activity = katals::magkind::dimension;

} // namespace dimensions

} // namespace units
