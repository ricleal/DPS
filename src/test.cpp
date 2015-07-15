/*
 * test.cpp
 *
 *  Created on: Jul 14, 2015
 *      Author: rhf
 */


#include "cctbx/uctbx.h"
#include "rstbx/dps_core/dps_core.h"

int main()
{
  using cctbx::uctbx::unit_cell;

  std::cout << "Main started..." << std::endl;

  // INPUT!
  scitbx::af::shared<scitbx::vec3<double> > reciprocal_space_vectors;

  // TODO: Indexing
  double max_cell_edge_for_dps_fft = 100.0; // in Angstroms.
                                    // 100 Angstrom should be suitable for small molecular work
                                    // use Bragg spot spacing to estimate the maximum
                                    // cell edge for macromolecular cases
  double directional_sampling_granularity = 0.029; // in radians; 0.029 radian granularity
                                           // is both fast enough and granular enough
                                           // to sample the hemisphere for small molecular work.
                                           // Tradeoff between performance and coverage occurs
                                           // for macromolecular work; DPS paper uses 0.029
  double max_cell_edge_basis_choice = 8.0;  // in Angstroms. This input parameter is important.
                                    // choice of basis vector is extremely sensitive to
                                    // this parameter--for silicon, must choose a value less
                                    // than twice the cell edge
  rstbx::dps_core dps = rstbx::dps_core();
  dps.setMaxcell(max_cell_edge_for_dps_fft);
  dps.setXyzData(reciprocal_space_vectors);


  std::cout << "Done!" << std::endl;
  return 0;
}

