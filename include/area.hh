#pragma once

#include <wither/units/si/length.hh>

namespace units
{

using square_metres = impl::square<metres>;

namespace dimensions
{

using area = square_metres::magkind::dimension;

} // namespace dimensions

} // namespace units
