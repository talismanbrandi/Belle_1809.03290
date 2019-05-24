# Belle_1809.03290
MCMC code to unfold Belle data from https://arxiv.org/abs/1809.03290v3


To make this work:

cd HEPfit/build
cmake .. -DLOCAL_INSTALL_ALL=ON -DMPIBAT=ON
make
make install
cd examples/BelleUnfolding
cp ../myModel/Makefile .
make
mpiexec -n 8 ./analysis config/myModel.conf MonteCarlo.conf (or ./analysis config/myModel.conf --noMC)
