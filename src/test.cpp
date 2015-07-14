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
  using std::cout;
  using std::endl;

  cout << "Main started..." << endl;

  unit_cell ucell(scitbx::af::double6(11,12,13,90,100,90));
  //cout << "unit cell: " << ucell.parameters() << endl;


  cout << "Done!" << endl;
  return 0;
}

