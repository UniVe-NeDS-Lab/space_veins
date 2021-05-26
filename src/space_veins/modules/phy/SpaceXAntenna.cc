//
// Copyright (C) 2016 Alexander Brummer <alexander.brummer@fau.de>
// Copyright (C) 2021 Mario Franke <research@m-franke.net>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// SPDX-License-Identifier: GPL-2.0-or-later
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#include "space_veins/space_veins.h"
#include "space_veins/modules/phy/SpaceXAntenna.h"

using namespace space_veins;

double SpaceXAntenna::getGain(veins::Coord ownPos, veins::Coord ownOrient, veins::Coord otherPos)
{
    // Returns the maximum antenna gain of a SpaceX antenna according to
    // https://apps.fcc.gov/els/GetAtt.html?id=259301
    return antenna_gain_dBi;
}

double SpaceXAntenna::getLastAngle()
{
    return -1.0;
}
