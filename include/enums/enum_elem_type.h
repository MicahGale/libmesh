// The libMesh Finite Element Library.
// Copyright (C) 2002-2026 Benjamin S. Kirk, John W. Peterson, Roy H. Stogner

// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA



#ifndef LIBMESH_ENUM_ELEM_TYPE_H
#define LIBMESH_ENUM_ELEM_TYPE_H

namespace libMesh {

/**
 * Defines an \p enum for geometric element types.
 *
 * The fixed type, i.e. ": int", enumeration syntax used here allows
 * this enum to be forward declared as
 * enum ElemType : int;
 * reducing header file dependencies.
 */
enum ElemType : int {
               // 1D
               EDGE2 = 0,
               EDGE3 = 1,
               EDGE4 = 2,
               // 2D
               TRI3 = 3,
               TRI6 = 4,
               QUAD4 = 5,
               QUAD8 = 6,
               QUAD9 = 7,
	       QUAD16 = 8,
               // 3D
               TET4 = 9,
               TET10 = 10,
               HEX8 = 11,
               HEX20 = 12,
               HEX27 = 13,
               PRISM6 = 14,
               PRISM15 = 15,
               PRISM18 = 16,
               PYRAMID5 = 17,
               PYRAMID13 = 18,
               PYRAMID14 = 19,
               // Infinite Elems
               INFEDGE2 = 20,
               INFQUAD4 = 21,
               INFQUAD6 = 22,
               INFHEX8 = 23,
               INFHEX16 = 24,
               INFHEX18 = 25,
               INFPRISM6 = 26,
               INFPRISM12 = 27,
               // 0D
               NODEELEM = 28,
               // Miscellaneous Elems
               REMOTEELEM = 29,
               TRI3SUBDIVISION = 30,
               // Shell Elems
               TRISHELL3 = 31,
               QUADSHELL4 = 32,
               QUADSHELL8 = 33,
               // Elems with Tri7 (Tri with mid-face node) faces
               TRI7 = 34,
               TET14 = 35,
               PRISM20 = 36,
               PRISM21 = 37,
               PYRAMID18 = 38,
               // Another shell elem
               QUADSHELL9 = 39,
               // An arbitrary polygon with N EDGE2 sides
               C0POLYGON = 40,
               // An arbitrary polyhedron with C0POLYGON sides
               C0POLYHEDRON = 41,
               // Invalid
               INVALID_ELEM};   // should always be last

/**
 * Enumeration of possible element master->physical mapping types.
 * We don't just directly store FEType for this because we want to
 * be certain our options all pack into a single char in an Elem.
 */
enum ElemMappingType : unsigned char {
  LAGRANGE_MAP = 0,
  RATIONAL_BERNSTEIN_MAP,
  INVALID_MAP };

}

#endif
