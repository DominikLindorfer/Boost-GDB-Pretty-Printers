# GDB Pretty-Printers for the Boost Library

This repository is an extension to David Matei's and Ruediger Sonderfeld's work by including also a pretty printer for Boost's ublas vectors (boost::numeric::ublas::vector). The respective code can be found at the end of the printer.py file in the /boost folder.

For simplicity I've also included the libstdc++-v3 pretty printers for the STL objects in the /libstdcxx folder (taken from https://gcc.gnu.org/svn/gcc/branches/gcc-4_8-branch/libstdc++-v3/python/libstdcxx/)

A minimal example is also attached in the /example folder. 


![David Matei's](https://github.com/mateidavid/Boost-Pretty-Printer)
![Ruediger Sonderfeld's](https://github.com/ruediger/Boost-Pretty-Printer)
![boost::numeric::ublas::vector](https://www.boost.org/doc/libs/1_65_1/libs/numeric/ublas/doc/index.html)

## Installation

To install clone or download the content of this repository. Then add the following lines to your /.gdbinit file

python
import sys 
sys.path.insert(0, 'PATH_TO_REPOSITORY')
from libstdcxx.v6.printers import register_libstdcxx_printers
import boost.latest ### see note on Entry Points below
register_libstdcxx_printers (None)
boost.register_printers()
end

where PATH_TO_REPOSITORY is the absolute path to the files contained in this repository. If no /.gdbinit file exists just create it. For simplicity I've included my own gdbinit file, where the files of this repository are stored at '/home/lindorfer/gdb_printers/python'.

