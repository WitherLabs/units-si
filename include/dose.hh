#pragma once

#include <wither/units/si/energy.hh>
#include <wither/units/si/mass.hh>

namespace units
{

using grays    = impl::divide<joules, prefix::kilo<grams>>;
using sieverts = impl::clone<grays>;

namespace dimensions
{

using dose = grays::magkind::dimension;

} // namespace dimensions

} // namespace units
