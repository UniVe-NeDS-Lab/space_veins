#!/bin/bash

#
# Copyright (C) 2023 Christoph Sommer <sommer@cms-labs.org>
#
# Documentation for these modules is at http://veins.car2x.org/
#
# SPDX-License-Identifier: GPL-2.0-or-later
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
#

# The following list shows changes made by Mario Franke
# Copyright (C) 2024 Mario Franke <research@m-franke.net>
# Documentation for space_Veins is at http://sat.car2x.org/
# SPDX-License-Identifier: GPL-2.0-or-later
#
# 2024-11-12 install ccache

set -e

# install dependencies
apt-get update && export DEBIAN_FRONTEND=noninteractive && apt-get -y install --no-install-recommends \
    vim-nox \
    zsh \
    valgrind \
    bear \
    clangd-13 \
    lldb-13 \
    ccache \
    ;
