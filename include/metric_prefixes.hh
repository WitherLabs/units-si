#pragma once

#include <wither/units/units.hh>

namespace units::prefix
{

template <impl::magnitude_cpt mag_t>
using atto = impl::swap_prefix<mag_t, std::atto>;

template <impl::magnitude_cpt mag_t>
using femto = impl::swap_prefix<mag_t, std::femto>;

template <impl::magnitude_cpt mag_t>
using pico = impl::swap_prefix<mag_t, std::pico>;

template <impl::magnitude_cpt mag_t>
using nano = impl::swap_prefix<mag_t, std::nano>;

template <impl::magnitude_cpt mag_t>
using micro = impl::swap_prefix<mag_t, std::micro>;

template <impl::magnitude_cpt mag_t>
using milli = impl::swap_prefix<mag_t, std::milli>;

template <impl::magnitude_cpt mag_t>
using centi = impl::swap_prefix<mag_t, std::centi>;

template <impl::magnitude_cpt mag_t>
using deci = impl::swap_prefix<mag_t, std::deci>;

template <impl::magnitude_cpt mag_t>
using deca = impl::swap_prefix<mag_t, std::deca>;

template <impl::magnitude_cpt mag_t>
using hecto = impl::swap_prefix<mag_t, std::hecto>;

template <impl::magnitude_cpt mag_t>
using kilo = impl::swap_prefix<mag_t, std::kilo>;

template <impl::magnitude_cpt mag_t>
using mega = impl::swap_prefix<mag_t, std::mega>;

template <impl::magnitude_cpt mag_t>
using giga = impl::swap_prefix<mag_t, std::giga>;

template <impl::magnitude_cpt mag_t>
using tera = impl::swap_prefix<mag_t, std::tera>;

template <impl::magnitude_cpt mag_t>
using peta = impl::swap_prefix<mag_t, std::peta>;

template <impl::magnitude_cpt mag_t>
using exa = impl::swap_prefix<mag_t, std::exa>;

template <impl::magnitude_cpt mag_t>
using kibi = impl::swap_prefix<mag_t, std::ratio<1024>>;

template <impl::magnitude_cpt mag_t>
using mebi = impl::swap_prefix<mag_t, std::ratio<1048576>>;

template <impl::magnitude_cpt mag_t>
using gibi = impl::swap_prefix<mag_t, std::ratio<1073741824>>;

template <impl::magnitude_cpt mag_t>
using tebi = impl::swap_prefix<mag_t, std::ratio<1099511627776>>;

template <impl::magnitude_cpt mag_t>
using pebi = impl::swap_prefix<mag_t, std::ratio<1125899907000000>>;

template <impl::magnitude_cpt mag_t>
using exbi = impl::swap_prefix<mag_t, std::ratio<1152921505000000000>>;

} // namespace units::prefix
