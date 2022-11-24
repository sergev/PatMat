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
cmake_minimum_required(VERSION 3.0)
project(patmat VERSION 0.0.1)

#
# Use C++17 standard.
#
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra -Wshadow -Wno-unused-parameter")

#
# By default, build for release with debug info.
#
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING
        "Default build type: RelWithDebInfo" FORCE)
endif()

#
# Build PatMat as static library
#
add_library(patmat STATIC
    CharacterSet.C
    PatElmt.C
    PatMatInternal.C
    Pattern.C
    PatternIO.C
    xmatch.C
)

add_subdirectory(Test)
enable_testing()
