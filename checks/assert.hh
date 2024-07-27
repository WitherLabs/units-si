// All data sourced from https://metricsystem.net

#include <wither/units/si/absorbed_dose_rate.hh>
#include <wither/units/si/acceleration.hh>
#include <wither/units/si/action.hh>
#include <wither/units/si/angular_acceleration.hh>
#include <wither/units/si/angular_momentum.hh>
#include <wither/units/si/angular_velocity.hh>
#include <wither/units/si/area.hh>
#include <wither/units/si/capacitance.hh>
#include <wither/units/si/catalytic_activity.hh>
#include <wither/units/si/catalytic_activity_per_unit_volume.hh>
#include <wither/units/si/charge.hh>
#include <wither/units/si/concentration.hh>
#include <wither/units/si/current_density.hh>
#include <wither/units/si/density.hh>
#include <wither/units/si/dose.hh>
#include <wither/units/si/dynamic_viscosity.hh>
#include <wither/units/si/electric_charge_density.hh>
#include <wither/units/si/electric_displacement.hh>
#include <wither/units/si/electric_field_strength.hh>
#include <wither/units/si/electric_flux_density.hh>
#include <wither/units/si/electrical_conductance.hh>
#include <wither/units/si/electrical_resistance.hh>
#include <wither/units/si/energy.hh>
#include <wither/units/si/energy_density.hh>
#include <wither/units/si/entropy.hh>
#include <wither/units/si/exposure.hh>
#include <wither/units/si/force.hh>
#include <wither/units/si/frequency.hh>
#include <wither/units/si/heat_capacity.hh>
#include <wither/units/si/heat_flux_density.hh>
#include <wither/units/si/illuminance.hh>
#include <wither/units/si/inductance.hh>
#include <wither/units/si/irradiance.hh>
#include <wither/units/si/luminance.hh>
#include <wither/units/si/luminous_efficacy.hh>
#include <wither/units/si/luminous_energy.hh>
#include <wither/units/si/luminous_flux.hh>
#include <wither/units/si/magnetic_field_strength.hh>
#include <wither/units/si/magnetic_flux_density.hh>
#include <wither/units/si/molar_energy.hh>
#include <wither/units/si/molar_entropy.hh>
#include <wither/units/si/molar_heat_capacity.hh>
#include <wither/units/si/momentum.hh>
#include <wither/units/si/permeability.hh>
#include <wither/units/si/permittivity.hh>
#include <wither/units/si/plane_angle.hh>
#include <wither/units/si/power.hh>
#include <wither/units/si/pressure.hh>
#include <wither/units/si/radiance.hh>
#include <wither/units/si/radiant_intensity.hh>
#include <wither/units/si/radioactivity.hh>
#include <wither/units/si/solid_angle.hh>
#include <wither/units/si/specific_energy.hh>
#include <wither/units/si/specific_entropy.hh>
#include <wither/units/si/specific_heat_capacity.hh>
#include <wither/units/si/specific_volume.hh>
#include <wither/units/si/surface_charge_density.hh>
#include <wither/units/si/surface_density.hh>
#include <wither/units/si/surface_tension.hh>
#include <wither/units/si/thermal_conductivity.hh>
#include <wither/units/si/torque.hh>
#include <wither/units/si/velocity.hh>
#include <wither/units/si/voltage.hh>
#include <wither/units/si/volume.hh>
#include <wither/units/si/volumetric_flow_rate.hh>
#include <wither/units/si/wavenumber.hh>

static_assert(units::impl::equal_dimensions<
              units::dimensions::area,
              units::impl::dimension<
                  std::ratio<0>, // mass
                  std::ratio<2>, // length
                  std::ratio<0>, // time
                  std::ratio<0>, // current
                  std::ratio<0>, // temperature
                  std::ratio<0>, // substance
                  std::ratio<0>  // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::volume,
              units::impl::dimension<
                  std::ratio<0>, // mass
                  std::ratio<3>, // length
                  std::ratio<0>, // time
                  std::ratio<0>, // current
                  std::ratio<0>, // temperature
                  std::ratio<0>, // substance
                  std::ratio<0>  // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::velocity,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<1>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::acceleration,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<1>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::volumetric_flow_rate,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<3>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::wavenumber,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-1>, // length
                  std::ratio<0>,  // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::density,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<-3>, // length
                  std::ratio<0>,  // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::surface_density,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<-2>, // length
                  std::ratio<0>,  // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::specific_volume,
              units::impl::dimension<
                  std::ratio<-1>, // mass
                  std::ratio<3>,  // length
                  std::ratio<0>,  // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::momentum,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<1>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::angular_momentum,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::current_density,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-2>, // length
                  std::ratio<0>,  // time
                  std::ratio<1>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::magnetic_field_strength,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-1>, // length
                  std::ratio<0>,  // time
                  std::ratio<1>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::concentration,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-3>, // length
                  std::ratio<0>,  // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<1>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::illuminance,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-2>, // length
                  std::ratio<0>,  // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<1>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::frequency,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::plane_angle,
              units::impl::dimension<
                  std::ratio<0>, // mass
                  std::ratio<0>, // length
                  std::ratio<0>, // time
                  std::ratio<0>, // current
                  std::ratio<0>, // temperature
                  std::ratio<0>, // substance
                  std::ratio<0>  // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::solid_angle,
              units::impl::dimension<
                  std::ratio<0>, // mass
                  std::ratio<0>, // length
                  std::ratio<0>, // time
                  std::ratio<0>, // current
                  std::ratio<0>, // temperature
                  std::ratio<0>, // substance
                  std::ratio<0>  // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::force,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<1>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::pressure,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<-1>, // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::energy,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::power,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-3>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::charge,
              units::impl::dimension<
                  std::ratio<0>, // mass
                  std::ratio<0>, // length
                  std::ratio<1>, // time
                  std::ratio<1>, // current
                  std::ratio<0>, // temperature
                  std::ratio<0>, // substance
                  std::ratio<0>  // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::voltage,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-3>, // time
                  std::ratio<-1>, // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::capacitance,
              units::impl::dimension<
                  std::ratio<-1>, // mass
                  std::ratio<-2>, // length
                  std::ratio<4>,  // time
                  std::ratio<2>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::electrical_resistance,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-3>, // time
                  std::ratio<-2>, // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::electrical_conductance,
              units::impl::dimension<
                  std::ratio<-1>, // mass
                  std::ratio<-2>, // length
                  std::ratio<3>,  // time
                  std::ratio<2>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::magnetic_flux,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<-1>, // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::magnetic_flux_density,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-2>, // time
                  std::ratio<-1>, // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::inductance,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<-2>, // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::luminous_flux,
              units::impl::dimension<
                  std::ratio<0>, // mass
                  std::ratio<0>, // length
                  std::ratio<0>, // time
                  std::ratio<0>, // current
                  std::ratio<0>, // temperature
                  std::ratio<0>, // substance
                  std::ratio<1>  // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::illuminance,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-2>, // length
                  std::ratio<0>,  // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<1>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::radioactivity,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::dose,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::catalytic_activity,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<1>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::dynamic_viscosity,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<-1>, // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::torque,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::surface_tension,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::action,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::angular_momentum,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::angular_velocity,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::angular_acceleration,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::heat_flux_density,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-3>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::irradiance,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-3>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::heat_capacity,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<-1>, // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::entropy,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<-1>, // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::specific_heat_capacity,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<-1>, // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::specific_entropy,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<-1>, // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::specific_energy,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::thermal_conductivity,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<1>,  // length
                  std::ratio<-3>, // time
                  std::ratio<0>,  // current
                  std::ratio<-1>, // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::energy_density,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<-1>, // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::electric_field_strength,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<1>,  // length
                  std::ratio<-3>, // time
                  std::ratio<-1>, // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::electric_charge_density,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-3>, // length
                  std::ratio<1>,  // time
                  std::ratio<1>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::surface_charge_density,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-2>, // length
                  std::ratio<1>,  // time
                  std::ratio<1>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::electric_flux_density,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-2>, // length
                  std::ratio<1>,  // time
                  std::ratio<1>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::electric_displacement,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-2>, // length
                  std::ratio<1>,  // time
                  std::ratio<1>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::permittivity,
              units::impl::dimension<
                  std::ratio<-1>, // mass
                  std::ratio<-3>, // length
                  std::ratio<4>,  // time
                  std::ratio<2>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::permeability,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<1>,  // length
                  std::ratio<-2>, // time
                  std::ratio<-2>, // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::molar_energy,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<-1>, // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::molar_heat_capacity,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<-1>, // temperature
                  std::ratio<-1>, // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::molar_entropy,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-2>, // time
                  std::ratio<0>,  // current
                  std::ratio<-1>, // temperature
                  std::ratio<-1>, // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::exposure,
              units::impl::dimension<
                  std::ratio<-1>, // mass
                  std::ratio<0>,  // length
                  std::ratio<1>,  // time
                  std::ratio<1>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::absorbed_dose_rate,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-3>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::radiant_intensity,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<2>,  // length
                  std::ratio<-3>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::radiance,
              units::impl::dimension<
                  std::ratio<1>,  // mass
                  std::ratio<0>,  // length
                  std::ratio<-3>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::catalytic_activity_per_unit_volume,
              units::impl::dimension<
                  std::ratio<0>,  // mass
                  std::ratio<-3>, // length
                  std::ratio<-1>, // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<1>,  // substance
                  std::ratio<0>   // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::luminous_energy,
              units::impl::dimension<
                  std::ratio<0>, // mass
                  std::ratio<0>, // length
                  std::ratio<1>, // time
                  std::ratio<0>, // current
                  std::ratio<0>, // temperature
                  std::ratio<0>, // substance
                  std::ratio<1>  // luminous intensity
                  >>);

static_assert(units::impl::equal_dimensions<
              units::dimensions::luminous_efficacy,
              units::impl::dimension<
                  std::ratio<-1>, // mass
                  std::ratio<-2>, // length
                  std::ratio<3>,  // time
                  std::ratio<0>,  // current
                  std::ratio<0>,  // temperature
                  std::ratio<0>,  // substance
                  std::ratio<1>   // luminous intensity
                  >>);

