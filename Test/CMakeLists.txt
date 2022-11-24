### Copyright 2013 Henry G. Weller
###-----------------------------------------------------------------------------
##  This file is part of
### ---     The PatMat Pattern Matcher
###-----------------------------------------------------------------------------
##
##  PatMat is free software: you can redistribute it and/or modify it under the
##  terms of the GNU General Public License version 2 as published by the Free
##  Software Foundation.
##
##  PatMat is distributed in the hope that it will be useful, but WITHOUT ANY
##  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
##  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
##  details.
##
##  You should have received a copy of the GNU General Public License along with
##  this program.  If not, see <http://www.gnu.org/licenses/>.
##
###-----------------------------------------------------------------------------
include(CTest)
link_libraries(patmat)
include_directories(..)

#
# Function: build a test with given name.
#
function(build_test name)
    add_executable(${name} ${name}.C valid.C)
    add_test(${name} ${name})
endfunction()

#
# Build all tests.
#
build_test(Any)
build_test(Any2)
build_test(Any3)
build_test(AnySet)
build_test(Arb)
build_test(Arbno)
build_test(Arbno2)
build_test(Arbno3)
build_test(Assgn)
build_test(Bal)
build_test(Break)
build_test(Break2)
build_test(BreakX)
build_test(BreakX2)
build_test(Defer)
build_test(Fence)
build_test(Len)
build_test(NotAny)
build_test(NSpan)
build_test(Pos)
build_test(Rem)
build_test(Rpos)
build_test(Rtab)
build_test(Span)
build_test(Tab)

#
# Build tutorial.
#
add_executable(tutorial tutorial.C)
add_executable(test1 test1.C)
add_executable(example1 example1.C)
add_executable(example4 example4.C)
