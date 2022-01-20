# ff-eqcd
Public release of the lattice data for the different correlators that contribute to
the force-force-correlator in hot QCD generated
in https://arxiv.org/abs/2112.01407.

As announced in the publication, we provide data for the three correlators that 
contribute to the gauge condensate, &lt;EE&gt;, i&lt;EB&gt; and &lt;BB&gt;. All data is obtained 
using anti-Hermitean generators for SU(3) and therefore needs an additional minus sign
to switch to standard conventions. For i&lt;EB&gt;, the imaginary part is measured, i.e. 
another minus sign is picked up.
  
The data is stored in files named as CORR_b_SPAC.dat, where CORR is (EE,EB,BB) and SPAC refers to 
the inverse lattice coupling, i.e. (24,36,48,72,96,144,192) which is eventually 
corrected by a constant to account for the O(a)-effects. The files are in the format
  
&emsp;correlator separation&emsp;mean of correlator&emsp;error of the mean&emsp;20 jackknives
  
  
We also give the original parameter files that contain the actual lattice parameters
at a given lattice spacing *a*.
