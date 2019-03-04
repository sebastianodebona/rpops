# PoPS (Pest or Pathogen Spread) Model R Wrapper <img src="man/PoPS_Logo.png" align="right" width="14%" />

[![Build Status](https://travis-ci.org/ncsu-landscape-dynamics/rpops.svg?branch=master)](https://travis-ci.org/ncsu-landscape-dynamics/rpops)
[![Build status](https://ci.appveyor.com/api/projects/status/pixncc1jo7gtu0wx/branch/master?svg=true)](https://ci.appveyor.com/project/ChrisJones687/rpops/branch/master)
[![codecov](https://codecov.io/gh/ncsu-landscape-dynamics/rpops/branch/master/graph/badge.svg)](https://codecov.io/gh/ncsu-landscape-dynamics/rpops)

## Overview

An R wrapper using RCPP for the [PoPS C++ library](https://github.com/ncsu-landscape-dynamics/PoPShttps://github.com/ncsu-landscape-dynamics/PoPS). PoPs is a stochastic spread model of pests and pathogens in forest and agricultural landscapes. It has been generalized and new features added but was originally developed for *Phytophthora ramorum* and the original version of the model was based on this reference paper: Ross K. Meentemeyer, Nik J. Cunniffe, Alex R. Cook, Joao A. N. Filipe, Richard D. Hunter, David M. Rizzo, and Christopher A. Gilligan 2011. Epidemiological modeling of invasion in heterogeneous landscapes: spread of sudden oak death in California (1990–2030). *Ecosphere* 2:art17. [http://dx.doi.org/10.1890/ES10-00192.1] (http://www.esajournals.org/doi/abs/10.1890/ES10-00192.1) 

## How to install

Install Rtools(https://cran.r-project.org/bin/windows/Rtools/) if not already installed. 
```R
install.packages("devtools")
library(devtools)
devtools::install_github("ncsu-landscape-dynamics/rpops")
library(PoPS)

## if you get an error that says it failed check use:
Sys.getenv("BINPREF")
## should return "C:/Rtools/mingw_$(WIN)/bin/"
## if not run the command below
cat('Sys.setenv(BINPREF = "C:/Rtools/mingw_$(WIN)/bin/")',
    file = file.path(Sys.getenv("HOME"), ".Rprofile"), 
    sep = "\n", append = FALSE)
```

## Authors

* Chris Jones
* Anna Petrasova
* Vaclav Petras
* Devon Gaydos

## License

Permission to use, copy, modify, and distribute this software and its documentation under the terms of the GNU General Public License is hereby granted. No representations are made about the suitability of this software for any purpose. It is provided "as is" without express or implied warranty. See the GNU General Public License for more details.
