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
  double max_cell_edge_for_dps_fft = 100.0;
  rstbx::dps_core dps = rstbx::dps_core();
  dps.setMaxcell(max_cell_edge_for_dps_fft);
  dps.setXyzData(reciprocal_space_vectors);


  std::cout << "Done!" << std::endl;
  return 0;
}

