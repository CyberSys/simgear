// Parse CSS colors
//
// Copyright (C) 2012  Thomas Geymayer <tomgey@gmail.com>
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301, USA

#ifndef PARSE_COLOR_HXX_
#define PARSE_COLOR_HXX_

#include <simgear/math/SGLimits.hxx>
#include <simgear/math/SGMathFwd.hxx>
#include <simgear/math/SGVec4.hxx>

#ifndef SIMGEAR_HEADLESS
# include <osg/Vec4>
#endif

#include <string>

namespace simgear
{

  /**
   * Parse a (CSS) color
   *
   * @param str     Text to parse
   * @param result  Output for parse color
   *
   * @return Whether str contained a valid color (and result has been modified)
   */
  bool parseColor(std::string str, SGVec4f& result);

#ifndef SIMGEAR_HEADLESS
  /**
   * Parse a (CSS) color into an osg::Vec4
   *
   * @param str     Text to parse
   * @param result  Output for parse color
   *
   * @return Whether str contained a valid color (and result has been modified)
   */
  bool parseColor(std::string str, osg::Vec4& result);
#endif

} // namespace simgear

#endif /* PARSE_COLOR_HXX_ */