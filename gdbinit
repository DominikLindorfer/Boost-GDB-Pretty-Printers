python
import sys 
sys.path.insert(0, '/home/lindorfer/gdb_printers/python')
from libstdcxx.v6.printers import register_libstdcxx_printers
import boost.latest ### see note on Entry Points below
register_libstdcxx_printers (None)
boost.register_printers()
end
